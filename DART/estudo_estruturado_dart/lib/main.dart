import 'package:estudo_estruturado_dart/src/imc.dart';
import 'package:estudo_estruturado_dart/src/listaDeCompras.dart';
import 'package:estudo_estruturado_dart/src/listaDeMap.dart';
import 'package:estudo_estruturado_dart/src/maiorDeIDade.dart';

void main(List<String> arguments) {
  if (arguments[0] == 'imc') {
    resultadoIMC();
  } else if (arguments[0] == 'compras') {
    listaDeCompras();
  } else if (arguments[0] == 'cadastro') {
    fazerCadastro();
  } else if (arguments[0] == 'maior-idade') {
    maiorDeIdade();
  } else {
    ('#### ESTE PROGRAMA NAO EXISTE ####');
  }
}