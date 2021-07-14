import 'dart:io';

main() {
  calculoIMC();
}

calculoIMC() {
  print("insira sua altura");
  String? testealtura = stdin.readLineSync();
  double altura = double.parse(testealtura!);
  print("insira seu peso");
  String? testepeso = stdin.readLineSync();
  double peso = double.parse(testepeso!);

  double imc = calcularIMC(altura, peso);

  imprimirIMC(imc);
}

calcularIMC(double altura, double peso) {
  return peso / (altura * altura);
}

imprimirIMC(double calculoimc) {
  if (calculoimc < 18) {
    print("MAGREZA | IMC = $calculoimc");
  } else if (calculoimc < 24.9) {
    print("NORMAL | IMC = $calculoimc");
  } else if (calculoimc < 29.9) {
    print("SOBREPESO | IMC = $calculoimc");
  } else if (calculoimc < 39.9) {
    print("OBESIDADE | IMC = $calculoimc");
  } else {
    print("OBESIDADE GRAVE | IMC = $calculoimc");
  }
}
