import 'dart:io';

main() {
  Map<String, dynamic> cadastro = {};
  menu(cadastro);
}

menu(cadastro) {
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
      cadastrar(cadastro);
    } else if (cmd == 2) {
      listar(cadastro);
    }
  } while (condicao);
}

cadastrar(cadastro) {
  inserirNome(cadastro);
  inserirIdade(cadastro);
  inserirCidade(cadastro);
  inserirEstado(cadastro);
}

listar(cadastro) {
  print(cadastro);
}

inserirNome(cadastro) {
  print("insira o nome");
  String? nome = stdin.readLineSync();
  cadastro['nome'] = nome;
}

inserirCidade(cadastro) {
  print('insira a cidade');
  String? cidade = stdin.readLineSync();
  cadastro['cidade'] = cidade;
}

inserirIdade(cadastro) {
  print('insira a idade');
  String? idade = stdin.readLineSync();
  cadastro['idade'] = int.parse(idade!);
}

inserirEstado(cadastro) {
  print('insira o estado');
  String? estado = stdin.readLineSync();
  cadastro['estado'] = estado;
}
