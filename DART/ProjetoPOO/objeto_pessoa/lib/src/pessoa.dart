class Pessoa {
  String? nome;
  int? idade;
  double? peso;
  double? altura;

  Pessoa({this.nome, this.idade, this.peso, this.altura});

  double imc() => peso! / (altura! * altura!);

  bool maiorIdade() => idade! >= 18;
}
