import java.util.Random;
public class max_heap {
    static void delete(int[] a,int ele,int size)
    {
        for(int i=1;i<size;i++)
        {
            if(a[i]==ele)
            {
                a[i]=a[i]+a[size];
                a[size] = a[i]-a[size];
                a[i] = a[i]-a[size];
                size--;
                check_next_max(a,size,i);
                
                break;
            }
        }
    }

    static void check_next_max(int [] a,int last,int curr)
    {
        int larger = curr;
        int left_child = curr*2;
        int right_child = left_child+1;
        if(left_child<=last && a[left_child] > a[larger])
        {
            larger = left_child;
        }
        if(right_child<=last && a[right_child]>a[larger])
        {
            larger = right_child;
        }
        if(larger!=curr)
        {
            a[curr]=a[curr]+a[larger];
            a[larger] = a[curr]-a[larger];
            a[curr] = a[curr]-a[larger];
            check_next_max(a, last, larger);
        }
    }

    static void heapify(int[] array ,int current)
    {
        int parent = current/2;
        if(parent>=1 && a[parent]< a[current])
        {
            a[par] = a[parent]+a[current];
            a[curr] = a[par]-a[curr];
            a[par] = a[par]-a[curr];
            heapify(a,par);
        }
    }
}
