#define max 10

template<class T>
class cola{
    private: 
        T espacioCola[max];
        int frente, final;
    public:
        cola();
        int operator+(T);
        int operator-(T*);
        int colaLlena();
        int colaVacia();
};
template <class T>
cola<T>::cola(){
    frente=-1;
    final=-1;
}
template <class  T>
int cola<T>::operator+(T dato){
    int res=0;
    if (colaLlena()!=1)
    {
        espacioCola[++final]=dato;
        if (final==0)
        {
            frente=0;
        }
        return 1;
    }
    return res;
}
template <class T>
int cola<T>::operator-(T*dato){
    int res=0;
    if(colaVacia()!=1){
        *dato=espacioCola[frente];
        if (frente==final)
        {
            frente=-1;
            final=-1;
        }
        else{
            frente++;
        }
        res=1;
    }
    return res;
}
template <class T>
int cola<T>::colaLlena(){
    if(final==max-1){
        return 1;
    }
    else{
        return 0;
    }
}
template<class T>
int cola<T>::colaVacia(){
    if (frente==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}