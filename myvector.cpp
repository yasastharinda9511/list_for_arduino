#include "myvector.h" 

template<class T>
list <T> ::list(){
	size=0;
	maxsize=5;
	step=5;
	address=(T*)malloc(sizeof(T)*maxsize);
	cout <<address<<endl;
}

template<class T>
list<T> :: list(int t){
	size=0;
	maxsize=t;
	step=t;
	address=(T*)malloc(sizeof(T)*maxsize);
}

template<class T>
int list<T> :: length(){
	return this->size;
}

template<class T>
void list<T> :: append(T item){
	if (maxsize>size){
	*(address+size)=item;
	}else{
		reallocation();
		cout<<"realloc"<<endl;
		cout<<address<<endl;
		*(address+size)=item;
	}

	size=size+1;
}
template<class T>
void list<T>::reallocation(){
	maxsize=maxsize +step;
	T* old_address=this->address;
	cout<<old_address<<endl;
	this->address=(T*)malloc(sizeof(T)*maxsize);
	cout<<"new_address is:"<<address<<endl;
	cout<<address<<endl;
	for(int i=0;i<size;i++){
		cout<<"**************"<<*(old_address+i)<<endl;
		*(address+i)= *(old_address+i);
		(old_address+i);
	}
	cout<<"END IT"<<endl;
}

template<class T>
void list<T>::pop(){
	delete (address+size-1);
	size=size-1;

}
template <class T>
T list<T>::operator[](int i){
	return *(address+i);
}
template<class T>
void list<T>::insert(T value,int index){
	if(size>=maxsize){
			maxsize=maxsize+step;
			reallocation();
}
	if(index<=size){
		T temp;
		for(int i=index;i<=size;i++){
			temp=*(address+i);
			*(address+i)=value;
			value=temp;
			cout<<"temp is:"<<temp<<endl;
		}
	}else{
		*(address+size)=value;
	}
	size+=1;
}
template <class T>
bool list<T>::find(T value){
	for(int i=0;i<size;i++){
		if(*(address+i)== value){
			return true;

		}
	}
	return false;
}
template <class T>
void list<T>::print(){
	cout<<"[";
	for(int i=0;i<size;i++){
		if(i==size-1){
			cout<<*(address+i)<<"]"<<endl;
		}else{
		cout<<*(address+i)<<",";
		}
	}
}
template <class T>
int  list<T>::find_index(T val){
	for(int i=0;i<size;i++){
		if ( *(address+i)==val){
			return i;
		}
	}
}
