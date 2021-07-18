import 'src/pessoa.dart';

void main(List<String> arguments) {
  Pessoa? pessoa = Pessoa(nome: 'joao', idade: 26, peso: 88, altura: 1.75);

  print('Nome : ${pessoa.nome}');
  print('IMC : ${pessoa.imc()}');
  print('Eh maior de idade? : ${pessoa.maiorIdade()}');
  
}
