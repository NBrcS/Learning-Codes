package OwnArr;

import java.lang.reflect.Array;

public class OwnArr<T>{
    private T[] arr;
    private int size = 0;

    public OwnArr(int size){
        arr = (T[])new Object[size];
    }

    public int getSize() {
        return size;
    }
    public T get(int index){
        if(index >= 0 && index < this.size){
            return this.arr[index];
        }
        else return null;
    }
    public int have(T search){
        for(int i = 0; i < this.size; i++){
            if(search.equals(this.arr[i])){
                return i;
            }
        }
        return -1;
    }
    public boolean contains(T search){
        return this.have(search) != -1;
    }
    public int lastIndexOf(T search){
        for(int i = this.size - 1; i >= 0; i--){
            if(search.equals(this.arr[i])){
                return i;
            }
        }
        return -1;

    }
    public boolean add(T item, int index){
        this.increaseCapacity();

        if(!(index >= 0 && index < this.size)){
            return false;
        }

        for(int i = this.size -1; i >= index; i--){
            this.arr[i + 1] = this.arr[i];
        }
        this.arr[index] = item;
        this.size++;

        return true;
    }
    public boolean add(T item){
        this.increaseCapacity();

        if(this.size < arr.length){
            arr[size] = item;
            this.size++;

            return true;
        }
        else return false;
    }
    public boolean delete(int index){
        if(!(index >= 0 && index < this.size)){
            return false;
        }

        for(int i = index; i < this.size; i++){
            this.arr[i] = this.arr[i + 1];
        }
        this.arr[this.size - 1] = null;
        this.size--;

        return true;
    }
    public boolean delete(T item){
        if(this.have(item) != -1){
            return this.delete(this.have(item));
        }
        else return false;
    }
    public void deleteAll(){
        this.arr = (T[]) new Object[this.arr.length];
        this.size = 0;
    }
    private boolean increaseCapacity(){
        if(this.arr.length == this.size){
            T[] new_arr = (T[])new Object[2 * this.arr.length];

            System.arraycopy(this.arr, 0, new_arr, 0, this.size);
            this.arr = new_arr;

            return true;
        }
        else return false;
    }

    @Override
    public String toString() {
        StringBuilder out = new StringBuilder();

        out.append("[ ");

        for(Object item : arr){
            if(item != null &&
                    !item.equals(this.arr[this.size - 1])){
                out.append(item);
                out.append(", ");
            }
            else break;
        }
        if(this.size > 0) out.append(arr[this.size - 1].toString());

        out.append(" ], ");
        out.append("Size = ").append(this.size);

        return out.toString();
    }
}
