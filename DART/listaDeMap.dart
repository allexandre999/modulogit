import 'dart:io';

List<Map<String, dynamic>> cadastros = [];
main() {
  menu();
}

menu() {
  bool condicao = true;

  do {
    print("0 - para sair");
    print("1 - para cadastrar");
    print("2 - para listar");
    int cmd = int.parse(stdin.readLineSync()!);
    if (cmd == 0) {
      print(' #### FIM DO PROGRAMA ####');
      condicao = false;
    } else if (cmd == 1) {
      cadastrar();
    } else if (cmd == 2) {
      listar();
    }
  } while (condicao);
}

cadastrar() {
  Map<String, dynamic> cad = {};
  inserirNome(cad);
  inserirIdade(cad);
  inserirCidade(cad);
  inserirEstado(cad);
  cadastros.add(cad);
}

listar() {
  print(cadastros);
}

inserirNome(cad) {
  print("insira o nome");
  cad['nome'] = stdin.readLineSync();
}

inserirCidade(cad) {
  print('insira a cidade');
  cad['cidade'] = stdin.readLineSync();
}

inserirIdade(cad) {
  print('insira a idade');
  cad['cidade'] = stdin.readLineSync();
}

inserirEstado(cad) {
  print('insira o estado');
  cad['estado'] = stdin.readLineSync();
}
