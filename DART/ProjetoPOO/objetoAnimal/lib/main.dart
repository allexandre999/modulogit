import 'package:objeto/src/cachorro.dart';
import 'package:objeto/src/gato.dart';
import 'package:objeto/src/leao.dart';
import 'package:objeto/src/pintinho.dart';

void main(List<String> arguments) {
  Gato? gato = Gato(nome: 'Dexter', barulho: 'Miado');
  Leao? leao = Leao(nome: 'Roger', barulho: 'Rugido');
  Cachorro? dog = Cachorro(nome: 'Caramelo', barulho: 'Latido');
  Pintinho? pinto = Pintinho(nome: 'Amarelinho', barulho: 'Piado');
  print('${gato.nome} faz ${gato.barulho}');
  print('${leao.nome} faz ${leao.barulho}');
  print('${dog.nome} faz ${dog.barulho}');
  print('${pinto.nome} faz ${pinto.barulho}');
}
