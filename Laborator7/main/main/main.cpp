#include <iostream>
#include <cmath>

template<class T>
class Tree {

    struct node
    {
        T value;
        int count;
        node* children[1005];
    };
public:

    void add_node(node *parent, node *child)
    {
        if (parent == nullptr)
        {
            parent = child;
        }
        else
        {
            parent->count++;
            parent->children[count] = child;
        }       
    }

    void get_node(node *parent, unsigned long long index)
    {


    }

    void delete_node(node *head)
    {
       for (auto i : head->children)
          {
              delete_node(head->i);
          }
       delete head;
    }

    void sort(node *parent)
    {
        for (int i = 0; i < parent->count - 1; i++)
        {
            for (int j = i + 1; j < parent->count; j++)
            {
                if (parent->children[i]->value > parent->children[j]->value)
                {
                    node* u = new node;
                    u = parent->children[j];
                    parent->children[j] = parent->children[i];
                    parent->children[i] = u;
                }
            }
        }
    }

    int count(node *parent)
    {
        return parent->count;
    }
};

float operator"" _Kelvin(unsigned long long x)
{
    /*float temp = 0;
    double dec = 10;
    int ok = 1;
    while ((*x) != NULL)
    {
        if ((*x) == '.')
        {
            ok = 0;
            x++;
        }
        else if (ok)
        {
            int a = (*x) - '0';
            temp = temp * 10 + a;
            x++;
        }
        else if (ok == 0)
        {
            int a = (*x) - '0';
            x++;
            float b = (float)(a*pow(dec, -1));
            dec *= 10;
            temp = temp + b;
        }
        
    }
    float ceva = temp - 273.15;
    return ceva;
    */
    return x - 273.15;
    
}

float operator"" _Fahrenheit(unsigned long long x)
{
    /*float temp = 0;
    float dec = 10;
    int ok = 1;
    while ((*x) != NULL)
    {
        if ((*x) == '.')
        {
            ok = 0;
            x++;
        }
        else if (ok)
        {
            int a = (*x) - '0';
            temp = temp * 10 + a;
            x++;
        }
        else if (ok == 0)
        {
            int a = (*x) - '0';
            x++;
            float b = (float)(a * pow(dec, -1));
            dec *= 10;
            temp = temp + b;
        }

    }
    float ceva = (temp - 32) / 1.8;
    return ceva;
    */
    return (x - 32) / 1.8;

}

int main() {
    float a = 300_Kelvin;
    float b = 120_Fahrenheit;
    std::cout << a << " " << b << '\n';
    return 0;
}