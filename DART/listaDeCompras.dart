import 'dart:io';

main() {
  List<String> lista = ["joao", "augusto"];
  menu(lista);
}

void menu(lista) {
  bool ehverdade = true;

  do {
    print(" #### ESCOLHA UMA OPCAO ####");
    print("0 - PARA SAIR");
    print("1 - PARA ADICIONAR ITEM");
    print("2 - PARA LISTAR ITENS");
    print("3 - PARA REMOVER ITEM");
    int testeehverdade = int.parse(stdin.readLineSync()!);

    if (testeehverdade == 0) {
      print("\n");
      print(" #### PROGRAMA FINALIZADO ####");
      print("\n");
      ehverdade = false;
    }
    if (testeehverdade == 1) {
      adicionarItem(lista);
    }
    if (testeehverdade == 2) {
      listarItens(lista);
    }
    if (testeehverdade == 3) {
      removerItens(lista);
    }
  } while (ehverdade);
}

void adicionarItem(lista) {
  print("#### ADICIONE O NOME DO ITEM ####");
  var testeitem = stdin.readLineSync();
  lista.add(testeitem!);
}

void listarItens(lista) {
  print(" #### LISTAGEM DE ITENS ####");
  for (int i = 0; i < lista.length; i++) {
    print("$i - ${lista[i]}");
  }
}

void removerItens(lista) {
  for (int i = 0; i < lista.length; i++) {
    print("$i - ${lista[i]}");
  }
  print("Insira o codigo para excluir");
  int excluirItem = int.parse(stdin.readLineSync()!);
  lista.removeAt(excluirItem);
}
