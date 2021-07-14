main() {
  bool condicao = true;
  int x = 0;

  while (condicao) {
    if (x > 9) {
      condicao = false;
    }
    print("loopWhile $x");
    x++;
  }
}
