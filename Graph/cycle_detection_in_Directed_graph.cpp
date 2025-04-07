

import java.util.*;

class Node{
    int first;
    int second;
    public Node(int first , int second){
        this.first = first;
        this.second = second;   
    }
}

public class cyclePresent{

    static boolean checkForCycle(int node , boolean[] vis , ArrayList<ArrayList<Integer>> adj, int[] parent)
    {
        Queue<Node> q = new LinkedList<>();
        q.add(new Node(s,-1));
        vis[node] = true;

        while(!q.isEmpty())
        {
           int newNode = q.peek().first;
           int newParent = q.peek().second;
           q.remove();

           for(Integer it : adj.get(newNode))
           {
            if(vis[it]==false)
            {

            q.add(new Node(it,newNode));
            vis[it] = true;
            }
            else if(newParent==it)
            {
                    return true;
            }
           }
           return false;    
        }
    }

    public static void main(String[] args)
    {

        Scanner scanner = new Scanner();
    }
}
