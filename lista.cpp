#include "lista.h"

void Lista::addFinal(int dato)
    {
        Nodo *temp = new Nodo;
        temp -> n = dato;
        temp->next=NULL;
        if(cabeza == NULL)
        {
            cabeza = temp;
            cola = temp;
        }
        else
        {
            cola->next=temp;
            cola = cola->next;
        }
        conta++;
    }

//    void Lista::Mostrar()
//    {
//        Nodo *temp = cabeza;
//        while(temp != NULL)
//        {
//            cout << "[" << temp->n <<"] -> ";
//            temp = temp->next;
//        }
//        cout << "[END]\n";
//    }

//    int Lista::getSize()
//    {
//        return conta;
//    }

//    void Lista::modificarPos(int pos, int dato)
//    {
//        if(cabeza != NULL)
//        {
//            if(pos <= getSize() && pos>0)
//            {
//                Nodo *temp = cabeza;
//                int cont=1;
//                while(cont < pos)
//                {
//                    temp=temp->next;
//                    cont++;
//                }
//                temp->n=dato;
//            }
//        }
//    }

//    void Lista::modificarDato(int datoV, int datoN)
//    {
//        if(cabeza != NULL)
//        {
//            Nodo *temp = cabeza;
//            while(temp != NULL)
//            {
//                if(datoV == temp->n)
//                {
//                    temp->n=datoN;
//                }
//                temp = temp->next;
//            }
//        }
//    }

//    void Lista::borrarPos(int pos)
//    {
//        Nodo *temp1 = cabeza;
//        if(pos == 0)
//        {
//            cabeza=temp1->next;
//            delete temp1;
//        }
//        else
//        {
//            for(int i=0;i<pos-1;i++)
//            {
//                temp1 = temp1->next;
//            }
//            Nodo *temp2 = temp1->next;
//            temp1->next = temp2->next;
//            delete temp2;
//        }
//    }

    void Lista::borrarDato(int dato)
    {
        int cont = 0;
        Nodo *temp = cabeza;

        while(temp != NULL)
        {
            if(temp->n == dato)
            {
               borrarPos(cont);
               conta--;
               cont = 0;
               temp = cabeza;
            }
            else
            {
                temp=temp->next;
                cont++;
            }
        }
    }

    bool Lista::Buscar(int dato)
    {
        Nodo *temp = cabeza;
        num[getSize()];

        bool estado = false;
        int cont = 0;
        int pos = 0;
        while(temp!=NULL)
        {
            if(temp->n == dato)
            {
                num[cont] = pos;
                cont++;
                estado = true;
            }
            temp = temp->next;
            pos++;
        }
        return estado;
    }

    int Lista::getSize(){
        return conta;
    }
