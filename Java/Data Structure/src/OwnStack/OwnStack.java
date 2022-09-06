package OwnStack;

public class OwnStack<T> extends EstruturaEstatica{

    public OwnStack(){
        super();
    }
    public OwnStack(int size){
        super.elementos = (T[])new Object[size];
    }

    public void stacks(T item){
        super.aumentaCapacidade();

        super.elementos[super.tamanho] = item;
        super.tamanho++;
    }
    public T top(){
        T item = null;
        
        try{
            item = (T) super.elementos[super.tamanho - 1];
        }catch (Exception e){
            e.printStackTrace();
        }
        
        return (T)item;
    }

    public T unstack(){

        if(!this.is_empty()){
            T item = (T)super.elementos[super.tamanho - 1];
            super.remove(super.tamanho - 1);

            return item;
        }
        else return null;
    }
}
