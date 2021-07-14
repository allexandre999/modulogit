import 'dart:io';

main() {
  // var nomes = [];
  // int teste = 1;

  /*  do {
    print("insira um nome para cadastrar ou digite sair para sair");
    var testenome = stdin.readLineSync();

    if (testenome == "sair") {
      print("finalizando o cadastro");
      teste = 0;
    } else {
      nomes.add(testenome);
    }
  } while (teste != 0);

  print(nomes);
  print("\n"); */

  List<String> nomes = [
    "joacir magalhaes",
    "gustavo lima",
    "paula albuquerque"
  ];
  print(nomes.length);
  print(nomes);
  nomes.add("testando outro nome");
  nomes.add("vila mix");
  print("\n");
  print(nomes.length);
  print(nomes);
  print(nomes[1]);
  print("\n");
  nomes.remove("testando outro nome");
  print(nomes);
  print("\n");
  nomes.removeAt(3);
  print(nomes.length);
  print(nomes);
}
