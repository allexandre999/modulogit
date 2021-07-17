import 'dart:io';

maiorDeIdade() {
//perguntar a idade da pessoa
//se a idade for maior ou igual a 18
// ele é maior de idade
//se nao for
// ele nao é maior de idade

  print("insira a idade");
  var testeidade = stdin.readLineSync();
  var idade = int.parse(testeidade!);

  if (idade >= 18) {
    print("eh maior de idade");
  } else {
    print("eh menor de idade");
  }
}
