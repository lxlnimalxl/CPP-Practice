#include<iostream>
#include<string>
#include<unordered_map>
#include<unordered_set>

using namespace std;


class Ghraph{
private:
    unordered_map<string, unordered_set<string>> adjlist;

public:
    void display(){
        for(auto[vertex , edegs] : adjlist){
            cout << vortex << ": [ ";
            for(auto edeg : edegs){
                cout << edeg << " ";
            }
            cout << " ]" << endl;
        }
    }

    bool addVortex(string vortex){
        if(adjlist.count(vortex)==0){
            adjlist[vortex];
            return true;
        }
        return false;
    }

    bool addEdge(string vortex1 , string vortex2){
        if(adjlist.count(vortex1)!=0 && adjlist.count(vortex2)!=0){
            adjlist.at(vortex1).insert(vortex2);
            adjlist.at(vortex2).insert(vortex1);
            return true;
        }
        return false;
    }

    bool removeEdge(string vortex1 , string vortex2){
        if(adjlist.count(vortex1)!= 0 && adjlist.count(vortex2)!=0){
            adjlist.at(vortex1).erase(vortex2);
            adjlist.at(vortex2).erase(vortex1);
            return true;
        }
        return false;
    }

    bool removeVortex(string vortex){
        if(adjlist.count(vortex)==0) return false;
        for(auto otherVortex : adjlist.at(vortex)){
            adjlist.at(otherVortex).erase(vortex);
        }
        adjlist.erase(vortex);
        return true;
    }

};




main()
{
    Ghraph* G = new Ghraph();
    G->addVortex("A");
    G->display();
    return 0;
}