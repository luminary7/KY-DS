---
typora-copy-images-to: ./img
---

## 为什么 Why

- **基础源码**(数据结构的基本操作)将会以`class`的形式给出，一个`.cpp`文件和一个`.h`文件，在*ipad*上下

  载**GitHub**应用软件，零散时间可快速打开温习代码，**习题解答**和**应用案例**会另给出一个`main.cpp`文件用

  于测试

- 每个章节里面一般包含3个文件`TextBook`，`Applied Case`和`Exercise`，分别包括**基础源码**(数据结构

  的基本操作)和**应用案例**的源码，以及**习题解答**的代码

- 对于在严书中涉及到的算法但**没有**用伪代码实现的, 会补充实现

- 代码主要以**严书**的为主，同时会补充邓书和王道的代码，遇到**完全重复**的算法时，**采用严书的实现方式**

- 命名方式、代码规范选用**严书标准**

- 开箱即用，下载后可以很轻松嵌入`main`函数中自行调试

------



## 教材源码 Source Code

|                            线性表                            |                           栈和队列                           |                       串、数组和广义表                       |                          树和二叉树                          |                              图                              |                             查找                             |                             排序                             |
| :----------------------------------------------------------: | :----------------------------------------------------------: | :----------------------------------------------------------: | :----------------------------------------------------------: | :----------------------------------------------------------: | :----------------------------------------------------------: | :----------------------------------------------------------: |
|   <a href="02-Linear List/TextBook/SqList.cpp">顺序表</a>    | <a href="03-Stack and Queue/TextBook/SqStack.cpp">顺序栈</a> | <a href="04-String, Array and Generalized List/TextBook/SString.cpp">顺序串</a> | <a href="05-Tree and Binary Tree/TextBook/SqBiTree.h">二叉树的存储</a> | <a href="06-Graph/TextBook/AdjacencyMatrix.cpp">邻接矩阵</a> | <a href="07-Searching/TextBook/Search_Seq.cpp">顺序查找</a>  |  <a href="08-Sorting/TextBook/InsertSort.cpp">直接插入</a>   |
|  <a href="02-Linear List/TextBook/LinkList.cpp">单链表</a>   | <a href="03-Stack and Queue/TextBook/LinkStack.cpp">链栈</a> | <a href="04-String, Array and Generalized List/TextBook/StorageStructuresOfString.h">串的存储</a> | <a href="05-Tree and Binary Tree/TextBook/BiTree.cpp">二叉树的操作</a> |   <a href="06-Graph/TextBook/AdjacencyList.cpp">邻接表</a>   | <a href="07-Searching/TextBook/Search_Bin.cpp">折半查找</a>  |  <a href="08-Sorting/TextBook/BInsertSort.cpp">折半插入</a>  |
| <a href="02-Linear List/TextBook/CLinkList.cpp">循环链表</a> | <a href="03-Stack and Queue\TextBook\StackAndRecursion.cpp">栈与递归</a> | <a href="04-String, Array and Generalized List/TextBook/Index_BF.cpp">BF算法</a> | <a href="05-Tree and Binary Tree/TextBook/BiThrTree.cpp">线索二叉树</a> |  <a href="06-Graph/TextBook/OrthogonalList.h">十字链表</a>   | <a href="07-Searching/TextBook/BlockingSearch.cpp">分块查找</a> |   <a href="08-Sorting/TextBook/ShellSort.cpp">希尔排序</a>   |
| <a href="02-Linear List/TextBook/DuLinkList.cpp">双向链表</a> | <a href="03-Stack and Queue/TextBook/SqQueue.cpp">循环队列</a> | <a href="04-String, Array and Generalized List/TextBook/next.cpp">next函数值</a> | <a href="05-Tree and Binary Tree/TextBook/StorageStructureOfTree.h">树的存储结构</a> | <a href="06-Graph/TextBook/AdjacencyMultilist.h">邻接多重表</a> |  <a href="07-Searching/TextBook/BSTree.cpp">二叉排序树</a>   |  <a href="08-Sorting/TextBook/BubbleSort.cpp">起泡排序</a>   |
| <a href="02-Linear List/TextBook/Union.cpp">线性表的并集</a> | <a href="03-Stack and Queue/TextBook/LinkQueue.cpp">链队</a> | <a href="04-String, Array and Generalized List/TextBook/Index_KMP.cpp">KMP算法</a> | <a href="05-Tree and Binary Tree/Applied Case/DataCompression/HuffmanTree.cpp">数据压缩</a> |       <a href="06-Graph/TextBook/DFS.cpp">DFS遍历</a>        |                                                              |                                                              |
| <a href="02-Linear List/TextBook/MergeList.cpp">合并有序表</a> | <a href="03-Stack and Queue\Applied Case\Conversion\Conversion.cpp">数制转换</a> | <a href="04-String, Array and Generalized List/TextBook/nextval.cpp">nextval修正值</a> | <a href="05-Tree and Binary Tree/Applied Case/BinaryTreeComputeExp/ComputeExpression.cpp">表达式树求值</a> |       <a href="06-Graph/TextBook/BFS.cpp">BFS遍历</a>        |                                                              | <a href="08-Sorting/TextBook/06_SelectSort/SelectSort.cpp">简单选择</a> |
| <a href="02-Linear List/Applied Case/Polynomial/Polynomial.cpp">一元多项式</a> | <a href="03-Stack and Queue/Applied Case/Matching/Matching.cpp">括号匹配</a> | <a href="04-String, Array and Generalized List/TextBook/GList.h">广义表的存储</a> | <a href="05-Tree and Binary Tree/TextBook/DisjointSet.cpp">*并查集</a> | <a href="06-Graph/TextBook/MinimumCostSpanningTree.cpp">最小生成树</a> |                                                              | <a href="08-Sorting/TextBook/07_TournamentSort/TournamentSort.cpp">锦标赛排序</a> |
|                                                              | <a href="03-Stack and Queue/Applied Case/EvaluateExpression/EvaluateExpression.cpp">表达式求值</a> | <a href="04-String, Array and Generalized List/Applied Case/Virus_detection/Virus_detection.cpp">病毒感染检测</a> |                                                              |  <a href="06-Graph/TextBook/ShortestPath.cpp">最短路径</a>   |                                                              |                                                              |
|                                                              |                                                              |                                                              |                                                              | <a href="06-Graph/TextBook/TopologicalSort.cpp">拓扑排序</a> |                                                              | <a href="08-Sorting/TextBook/09_MergeSort/MergeSort.cpp">归并排序</a> |
|                                                              |                                                              |                                                              |                                                              |  <a href="06-Graph/TextBook/CriticalPath.cpp">关键路径</a>   |                                                              |                                                              |
|                                                              |                                                              |                                                              |                                                              | <a href="06-Graph/Applied Case/SixDegreeSeparation/SixDegree_BFS.cpp">六度空间</a> |                                                              |                                                              |

**注**：带`*`的为源自其他参考书目的**补充**算法

------



## 编程题解 Solutions

|                           线性表                           |                           栈和队列                           |                       串、数组和广义表                       |                          树和二叉树                          |  图  |                           查找                            | 排序 |
| :--------------------------------------------------------: | :----------------------------------------------------------: | :----------------------------------------------------------: | :----------------------------------------------------------: | :--: | :-------------------------------------------------------: | :--: |
|  <a href="02-Linear List/Exercise/Difference.cpp">2.4</a>  |  <a href="03-Stack and Queue/Exercise/DblStack.cpp">3.1</a>  | <a href="04-String, Array and Generalized List/Exercise/CharacterFrequencyStatistics.cpp">4.1</a> |                                                              |      | <a href="07-Searching/Exercise/BinSearch_Cur.cpp">7.1</a> |      |
|     <a href="02-Linear List/Exercise/Max.cpp">2.6</a>      | <a href="03-Stack and Queue\Exercise\IsPalindrome.cpp">3.2</a> |                                                              |                                                              |      |                                                           |      |
|   <a href="02-Linear List/Exercise/Inverse.cpp">2.7</a>    |  <a href="03-Stack and Queue/Exercise/Postfix.cpp">3.4</a>   |                                                              |                                                              |      |                                                           |      |
| <a href="02-Linear List/Exercise/DeleteMinMax.cpp">2.8</a> | <a href="03-Stack and Queue/Exercise/SqQueueWithTag.cpp">3.7</a> |                                                              |                                                              |      |                                                           |      |
|                                                            |   <a href="03-Stack and Queue/Exercise/Deque.cpp">3.8</a>    |                                                              |                                                              |      |                                                           |      |
|                                                            |                                                              |                                                              | <a href="05-Tree and Binary Tree/Exercise/LevelOrderTraversal.cpp">5.6</a> |      |                                                           |      |

------



## 如何使用 How to use

1. 选用**CLion**(大学生可申请使用免费的教育版本)集成开发环境，配置好C++开发环境

2. 点击该仓库的`Code`绿色按钮，然后点击`Download ZIP`或者直接使用**终端**下载：

```bash
git clone https://github.com/ascendho/KY-DS.git
```

![](img/C0J__QFOH%5D4RD%7D%5BU%7DHYWV@B.png)

3. 解压，然后选中要打开的文件夹，右键选中`Open Folder as CLion Project`

![1](img/1.png)

------



## 常见问题 FAQ

> Q1：源码后缀是cpp，所以需要学习完了c++才能看懂吗？
>
> 答：不，虽然后缀名是cpp，但是也主要是为了使用c++语言的传引用特性以及与严书的"类C语言"同步，教材源码中不会引入其他的c++语言特性，而在部分题解中，为了类型适配方便，会视情况使用标准库`stl`里面的数据结构，但不影响程序逻辑的理解(相反，事实上恰恰方便了程序的理解)。基于此，你只需要基本掌握c语言，就能看懂代码
>
> 
>
> Q2：我可以不使用CLion，采用其他IDE吗？
>
> 答：当然可以，只不过你可能就需要先删除文件夹中CLion相关的配置文件(如CMakeLists.txt)或者直接在网页端复制你需要的代码即可

------



## 参考书目 Bibliography

|            教材             |      作者      |                             图示                             |                           资源链接                           |
| :-------------------------: | :------------: | :----------------------------------------------------------: | :----------------------------------------------------------: |
|       数据结构双色版        | 严蔚敏、李冬梅 | ![数据结构（C语言版）（第2版）](img/2110398aa6025c417e71.jpeg) | <a href="https://www.ryjiaoyu.com/book/details/45170">人邮教育</a> |
| 数据结构习题解析与实验指导  |     李冬梅     | ![数据结构习题解析与实验指导](img/2204c1aa113663e88ab9.png)  | <a href="https://www.ryjiaoyu.com/book/details/43313">人邮教育</a> |
|      数据结构(C语言版)      | 严蔚敏、吴伟民 | ![002368-07-1691942097716-2](img/002368-07-1691942097716-2.jpg) | <a href="http://www.tup.tsinghua.edu.cn/booksCenter/book_00236807.html">清华大学出版社</a> |
| 数据结构（C++语言版 第3版） |     邓俊辉     |      ![数据结构（C++语言版 第3版）](img/s28064419.jpg)       | <a href="https://dsa.cs.tsinghua.edu.cn/~deng/ds/dsacpp/index.htm">DSACPP</a> |
|  2024数据结构考研复习指导   |    王道论坛    | ![image-20230619194511434](img/image-20230619194511434.png)  |                              /                               |

------



## 推荐资源 Recommended Resources

- <a href="https://www.educoder.net/paths/jizlwfkq">头歌实训平台</a>

- <a href="https://www.bilibili.com/video/BV1nJ411V7bd/?spm_id_from=333.337.search-card.all.click">数据结构与算法基础--青岛大学王卓</a>

- <a href="https://www.bilibili.com/video/BV1b7411N798?p=51&spm_id_from=pageDriver&vd_source=61a8f743f4489a59a143809ed7fb1159">数据结构--王道计算机考研</a>

------



## 声明 Disclaimer

- 该项目**仅用于学习交流**，凡是可能涉及到的版权问题，归**教材原作者所有**

- 本人所贡献的部分，遵从`MIT`协议

最后，如果你认为这个项目帮助到了你，不妨给个star✨!

------



## Star History

[![Star History Chart](https://api.star-history.com/svg?repos=ascendho/KY-DS&type=Date)](https://star-history.com/#ascendho/KY-DS&Date)
