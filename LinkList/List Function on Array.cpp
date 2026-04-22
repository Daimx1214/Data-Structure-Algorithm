#include <iostream>
using namespace std;

class List {	
    int arr[100];
    int n; 

public: // list bana
    List() {
        n = 0;
    }

    void copy(List num) {
        n = num.n;
        for (int i = 0; i < n; i++)
            arr[i] = num.arr[i];
    }

    void clear() {
        n = 0;
    }

    void insert(int idx, int pos) {
        if (n >= 100 || pos < 0 || pos > n) {
            cout << "Invalid position!\n";
            return;
        }
        for (int i = n; i > pos; i--)
            arr[i] = arr[i - 1];
            arr[pos] = idx;
        n++;
    }

    void remove(int pos) {
        if (pos < 0 || pos >= n) {
            cout << "Invalid position!\n";
            return;
        }
        for (int i = pos; i < n - 1; i++)
            arr[i] = arr[i + 1];
        n--;
    }

    int get(int pos) {
        if (pos < 0 || pos >= n) {
            cout << "Invalid position!\n";
            return -1;
        }
        return arr[pos];
    }

    void update(int idx, int pos) {
        if (pos < 0 || pos >= n) {
            cout << "Invalid position!\n";
            return;
        }
        arr[pos] = idx;
    }

    int find(int idx) {
        for (int i = 0; i < n; i++) {
            if (arr[i] == idx)
                return i; 
        }
        return -1; 
    }

    int length() {
        return n;
    }

    void display() {
        cout << "List: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    List list;

    list.insert(10, 0);
    list.insert(20, 1);
    list.insert(30, 2);
    list.display();

    cout << "Length: " << list.length() << endl;
    cout << "Element at index 1: " << list.get(1) << endl;

    list.update(25, 1);
    list.display();

    cout << "Find 25 at index: " << list.find(25) << endl;

    list.remove(0);
    list.display();

    list.clear();
    list.display();

    return 0;
}
//Class banai ha List k name sa
//private members hn int arr , n
//public  ma sara functions han  
//1. List() means aik list create ki ha 
//2. copy ki ha list through parameters
//aik array jo arr wali thi us ma values di main ma ja k or yahn us k copy bana kr main ma call 
//kia same as copy constructor
//3. Clear kr di list us k n ko 0 kr da
//4. insert krna us ma 2 parameters hn aik ha idx means index or 2nd ha kon si position pa  if 
//condition ya ha k means size hamra 100 ha to 100 sa bara na ho or -ve na ho bss 
//insert kra ga to shifting ho gi last wala aik elemnt nikl jay ga array sa us lia loop ulti chali
//5. same kam for remove
//6. but jo idx remove kia next wala idx us ki gaja pa iaya ga or array ko consecutive kra ga
//7. GEt kr rah ha yani lana kon si position wala value dekhay ga 
//agar wo osition nhii available to -1 return kra ga 
//8. Update bhi same idx do or position no 
//9. find yani kon sa idx pa kon si value ha agar wo index nhi ha t o-1 return kra ga 
//10. length batiya ga aray size kia ha us ma kitna elements hn
//11. display all
