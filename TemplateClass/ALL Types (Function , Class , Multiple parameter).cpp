// #include <iostream>
// using namespace std;
//
// template <typename T>
// T add(T a, T b) {
//     return a + b;
// }
//
// int main() {
//     cout << add(2, 3) << endl;       // int
//     cout << add(2.5, 3.7) << endl;   // double
//     cout << add(5.1f, 3.2f) << endl; // float
// }



// #include <iostream>
// using namespace std;
//
// template <class T>
// class Box {
//     T value;
// public:
//     Box(T v) { value = v; }
//     void show() {
//         cout << "Value: " << value << endl;
//     }
// };
//
// int main() {
//     Box<int> obj1(10);
//     Box<double> obj2(3.14);
//     Box<string> obj3("Hello Template");
//
//     obj1.show();
//     obj2.show();
//     obj3.show();
// }



//#include <iostream>
//using namespace std;
//
//template <class T1, class T2>
//class Pair {
//    T1 first;
//    T2 second;
//public:
//    Pair(T1 a, T2 b) {
//        first = a;
//        second = b;
//    }
//    void show() {
//        cout << first << " and " << second << endl;
//    }
//};
//
//int main() {
//    Pair<int, string> obj(1, "Apple");
//    obj.show();
//}
