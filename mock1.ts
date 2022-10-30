interface Vendedor {
  id: string;
  comissao: number;
}

interface Produto {
  id: string;
  valor: number;
  vendedor: Vendedor;
}

interface ProdutoCarrinho extends Produto {
  quantidade: number;
}

type Carrinho = {
  produtos: { [id_produto: string]: ProdutoCarrinho };
  valorTotal: { [id_vendedor: string]: number };
};

type Database = {
  produtos: { [id_produto: string]: Produto };
  vendedores: { [id_vendedor: string]: Vendedor };
};

const db: Database = {
  produtos: {
    "1": {
      id: "1",
      valor: 123,
      vendedor: {
        id: "1",
        comissao: 0.2,
      },
    },
    "2": {
      id: "2",
      valor: 546,
      vendedor: {
        id: "1",
        comissao: 0.2,
      },
    },
    "3": {
      id: "3",
      valor: 88,
      vendedor: {
        id: "1",
        comissao: 0.2,
      },
    },
  },
  vendedores: {
    "1": {
      id: "1",
      comissao: 0.2,
    },
  },
};

let appCartState: Carrinho = {
  produtos: {},
  valorTotal: {
    vtex: 0,
  },
};

type Action = {
  type: string;
  payload: any;
};

function reducer({ type, payload }: Action, state: Carrinho): Carrinho {
  switch (type) {
    case "ADD_PRODUCT": {
      const { id } = payload;
      const produto = db.produtos[id];

      state.produtos[id] ??= {
        ...produto,
        quantidade: 0,
      };

      state.valorTotal[produto.vendedor.id] ??= 0;
      state.produtos[id].quantidade++;

      state.valorTotal.vtex += produto.valor * produto.vendedor.comissao;
      state.valorTotal[produto.vendedor.id] +=
        produto.valor * (1 - produto.vendedor.comissao);

      return state;
    }
  }
}

function dispatch(action: Action) {
  appCartState = reducer(action, appCartState);
}

function add(id: string) {
  dispatch({
    type: "ADD_PRODUCT",
    payload: {
      id,
    },
  });
}

function rm(id: string) {
  if (!appCartState.produtos[id]) return;

  const produto = appCartState.produtos[id];
  appCartState.valorTotal.vtex -=
    produto.valor * produto.quantidade * produto.vendedor.comissao;
  appCartState.valorTotal[produto.vendedor.id] -=
    produto.valor * produto.quantidade * (1 - produto.vendedor.comissao);
  delete appCartState.produtos[id];
}

function alter(id: string, qtd: number) {
  if (!appCartState.produtos[id]) return;

  const produto = appCartState.produtos[id];
  appCartState.produtos[id].quantidade = qtd - produto.quantidade;
  appCartState.valorTotal.vtex += produto.valor * produto.vendedor.comissao;
  appCartState.valorTotal[produto.vendedor.id] +=
    produto.valor * produto.quantidade * (1 - produto.vendedor.comissao);
}

function execute(action: () => void) {
  action();
  console.log({ appCartState });
}

execute(() => add("1"));
execute(() => add("1"));
// execute(() => add('3'))
execute(() => rm("1"));
// execute(() => add('2'))
