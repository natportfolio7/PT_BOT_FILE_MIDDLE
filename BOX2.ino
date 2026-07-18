void Box2() {
  FF(50, 300);
  turnDegreeFront(20, 70);
  turnDegreeFront(70, 20);
  turnDegreeFront(15, 70);
  FF(100, 350);
  turnDegreeFront(20, 70);
  SetFront(15, 350);
  BB(15, 550);
  turnDegreeBack(70, 20);
  BB(100, 350);
  turnDegreeBack(70, 20);
  turnDegreeBack(70, 20);
  turnDegreeBack(15, 70);
  turnDegreeBack(70, 20);
  DropB(40);

  FF(5, 550);
  turnDegreeFront(20, 70);
  turnDegreeFront(70, 15);
  turnDegreeFront(15, 70);
  FF(50, 300);
  FF(50, 300);
  FF(20, 2000, 'R');
  DropF(40);
  BB(50, 300);
  BB(50, 300);
  BB(50, 300);
  BB(50, 300);
  BB(50, 300);
  BB(50, 250, 'L');
  DropB(40);

  FF(5, 550);
  turnDegreeFront(70, 20);
  FF(100, 350);
  turnDegreeFront(70, 20);
  FF(20, 2000);
  FF(100, 530, 'R');
  SetFront(20, 200, 'L');
  FF(100, 700, 'L');
  FF(100, 300);
  SetFront(20, 200);
}