# hash(unordered_map<>)
key->address

# heap(priority_queue<>)

# binary search tree

# linked list
## 一般都要求原地操作，即O(1)空间复杂度

# stack(stack<>)

# queue(queue<>)

# 20行以内的数据结构或算法

## 快排
'3' 5 1 4 9 8 2 6  
base=3  
l=6 l>=base l--  
l=2 l<base   
r=3 r<=base r++  
r=5 r>base  
swap l,r  
'3' 2 1 4 9 8 5 6  
...   
1 2 '3' 4 9 8 5 6 // 3已经放好位置，即3之后的元素都比3大，3之前的元素都比3小  

```
void quick_sort(vector<int>& nums, int left, int right)
{
    if(left>=right) return;
    /*int id=rand()%(right-left+1)+left;
    swap(nums[left],nums[id]);*/
    int base=nums[left],l=left,r=right;
    while(l<r)
    {
        while(l<r&&nums[r]>=base) r--;
        while(l<r&&nums[l]<=base) l++;
        swap(nums[l],nums[r]);
    }
    swap(nums[l],nums[left]);
    quick_sort(nums,left,l-1);
    quick_sort(nums,l+1,right);
}
```
### 应用
排序数组（912 https://leetcode.cn/problems/sort-an-array/description/）  
找第k大元素（LCR 076 https://leetcode.cn/problems/xx4gT2/description/）   
找前k大元素（面试题 17.14 https://leetcode.cn/problems/smallest-k-lcci/description/）  

## （二叉）堆
'0' 1 2 3 4 5 6  
len=7-1,从下标1开始  
叶子节点：i>len/2  
i的父亲：i/2  
i的左右孩子：2\*i, 2\*i+1  
  
方便编程需要从0开始, i为下标
len=7
叶子节点: i+1>len/2 
i的父亲：(i+1)/2-1=
i的左右儿子：2*(i+1)-1

```
// 向上调整
void up(vector<int>& heap, int i)
{
    while(i>0&&heap[(i+1)/2-1]<heap[i])
    {
        swap(heap[(i+1)/2-1],heap[i]);
        i=(i+1)/2-1;
    }
}

// 向下调整
void down(vector<int>& heap, int i, int len)
{
    while(i<len)
    {
        int l=2*(i+1)-1;
        if(l+1<len&&heap[l+1]>heap[l]) l++;
        if(heap[i]>heap[l]) break;
        swap(heap[l],heap[i]);
        i=l;
    }
}

// 建立大根堆
void build_heap(vector<int>& a, int len)
{
    for(int i=len/2-1;i>=0;i--)
    {
        down(a, i, len);
    }
}
```
## dfs
```
void dfs(const vector<vector<int>>& matrix, vector<int>& visited, int start)
{
    visited[start]=1;
    cout<<strat<<" ";
    for(int i=0;i<matrix.size();i++)
    {
        if(matrix[start][i]!=0&&visited[i]==0)
        {
            dfs(matrix,visited,i);
        }
    }
}
```
### 应用
拓扑排序，


## 并查集
```
vector<int> parent;
```

# 二叉树前序遍历的非递归写法
根左右   
先输出根
什么时候入栈，什么时候出栈？  
如果当前节点不为NULL，则入栈；否则，出栈；
```
void f()
```
