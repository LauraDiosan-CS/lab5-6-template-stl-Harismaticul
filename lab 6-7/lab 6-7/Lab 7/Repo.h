#pragma once

#include<vector>
#include<iterator>
using namespace std;


//Repo<Prajitura> repo;

template <class T>
class Repo
{
private:
    vector<T> elements;
    
public:
    Repo()
    {
        this->elements.clear();
    }
    ~Repo()
    {
        this->elements.clear();
    }
    
    virtual int getSize()
    {
        return this->elements.size();
    }
    
    virtual void addElement( T element )
    {
        this->elements.push_back(element);
    }
    
    virtual T getElement(int id)
    {
        typename vector<T> :: iterator it;
        
        for(
            it=this->elements.begin() ;
            it!=this->elements.end();
            it++
            )
            if( (*it).getID() == id )
                return *it;
        
        return *(this->elements.begin());
    }
    
    virtual vector<T> getAll()
    {
        return this->elements;
    }
    
    virtual void updateElement(int id, T newElement)
    {
        vector<T> elements = this->elements;
        typename vector<T> :: iterator it;
        
        for( it = elements.begin() ; it!=elements.end(); it++ )
            if( (*it).getID() == id)
            {
                *it = newElement;
                break;
            }
    }
    
    
    virtual void deleteElement(int id)
    {
        vector<T> elements = this->elements;
        typename vector<T> :: iterator it;
        
        for( it = elements.begin() ; it!=elements.end(); it++ )
            if( (*it).getID() == id)
            {
                this->elements.erase(it);
                break;
            }
    }

};


