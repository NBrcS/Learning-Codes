package OwnQueue;

import OwnStack.EstruturaEstatica;

public class OwnQueue<T> extends EstruturaEstatica<T> {

    public OwnQueue(){
        super();
    }

    public OwnQueue(int size){
        super(size);
    }

    public boolean add(T item){
        return super.adiciona(item);
    }

    public T remove(){
        if(super.is_empty()){
            return null;
        }

        T item = super.elementos[0];
        super.remove(0);

        return item;
    }

    public T look(){
        return super.elementos[0];
    }


}
