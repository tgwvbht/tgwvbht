// 取位数1
/**
 * 输入一个 5 位正整数 n，从高位到低位依次输出每一位的数，每个数字一行。
 * 一个 5 位正整数 n 。
 * 从高位到低位依次输出每一位的数字
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, e, f;
    cin >> a;
    f = a % 10;
    a /= 10;
    e = a % 10;
    a /= 10;
    d = a % 10;
    a /= 10;
    c = a % 10;
    a /= 10;
    b = a % 10;
    cout << b << endl
         << c << endl
         << d << endl
         << e << endl
         << f;
    return 0;
}
/**
 * 秒和小时分钟的转化
 * 将秒表示成小时分钟秒的形式。
 */
#include <iostream>
using namespace std;
int main()
{
    int sec, a, b, c;
    cin >> sec;
    a = sec % 60;
    b = sec / 60 % 60;
    c = sec / 60 / 60;
    cout << sec << "秒" << "=" << c << "小时" << b << "分" << a << "秒" << endl;
    return 0;
}
/**
 * 求平均分
 * 已知某班有男同学x位，女同学y位，x位男生的平均分为87，y位女生的平均分是85分，问全体同学的平均分是多少分。
 * 输入：两个整数，分别为x和y的值。
 * 输出：一位数可能是整数也可能是浮点数(保留4位小数)。
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("%.4f", (87 * x + 85 * y) * 1.0 / (x + y));
    return 0;
}
/**
 *  计算距离
 * 太阳光到达地球表面需要8分18秒，光在真空中的传播速度是宇宙中最快的速度，为300000000m/s．请问太阳到地球有多远。
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    long long d;
    a = 8;
    b = 18;
    d = 300000000;
    c = a * 60 + b;
    cout << c * d << endl;
    return 0;
}
/**
 * 伦敦奥运会要到了，小鱼在拼命练习游泳准备参加游泳比赛，可怜的小鱼并不知道鱼类是不能参加人类的奥运会的。这一天，小鱼给自己的游泳时间做了精确的计时（本题中的计时都按24小时制计算），它发现自己从a时b分一直游泳到当天的c时d分，请你帮小鱼计算一下，它这天一共游了多少时间呢？小鱼游的好辛苦呀，你可不要算错了哦。
 * 一行内输入4个整数，分别表示a,b,c,d。
 * 一行内输出2个整数e和f，用空格间隔，依次表示小鱼这天一共游了多少小时多少分钟。其中表示分钟的整数f应该小于60。
 */
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x = c - a, y = d - b;
    if (y < 0)
    {
        x--;
        y += 60;
    }
    cout << x << " " << y;
    return 0;
}
/**
 * 求三个数的乘积和三次方和
 * 输入三个整数
 * 输出三个数乘积以及三次方输出的和
 */
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << a * b * c << " " << a * a * a + b * b * b + c * c * c << endl;
    return 0;
}
/**
 * 小玉买玩具
 * 班主任给小玉一个任务，到文具店里买尽量多的签字笔。已知一只签字笔的价格是1元9角，而班主任给小玉的钱是a元b角，小玉想知道，她最多能买多少只签字笔呢。
 * 输入的数据，在一行内，包括两个整数，依次表示a和b，a<=10000,b<=9。
 * 输出一个整数，表示小玉最多能买多少只签字笔。
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b;
    c = a * 10 + b;
    cout << c / 19;
    return 0;
}
/**
 * 输出字符菱形
 * 用 * 构造一个对角线长 5 个字符，倾斜放置的菱形。
 * 没有输入要求。
 * 用 * 构成的菱形。
 */
#include <iostream>
using namespace std;
int main()
{
    cout << "  *" << endl;
    cout << " ***" << endl;
    cout << "*****" << endl;
    cout << " ***" << endl;
    cout << "  *" << endl;
    return 0;
}
/**
 * 计算矩形的面积和周长给定矩形的长和宽，求矩形的周长和面积。
 *输入为两个不超过100的非负实数，即矩形的长和宽，类型为double。
 *输出两个实数，即矩形的面积和周长，保留到小数点后2位。
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b;
    cin >> a >> b;
    cout << fixed << setprecision(2) << a * b << " " << (a + b) * 2 << endl;
    return 0;
}
/**
 * 大小写字母转换
 * 将输入的大写字母转换为小写字母。
 * 输入描述：一个大写字母。
 * 输出描述：一个小写字母。
 */
#include <stdio.h>
int main()
{
    char c;
    printf("");
    c = getchar();
    putchar(c + 32);
    return 0;
}
/**
 * 小玉家的电费
 * 夏天到了，各家各户的用电量都增加了许多，相应的电费也交的更多了。小玉家今天收到了一份电费通知单。小玉看到上面写：据规定，月用电量在150千瓦时及以下部分按每千瓦时0.4463元执行，月用电量在151~400千瓦时的部分按每千瓦时0.4663元执行，月用电量在401千瓦时及以上部分按每千瓦时0.5663元执行;小玉想自己验证一下，电费通知单上应交电费的数目到底是否正确呢。请编写一个程序，已知用电总计，根据电价规定，计算出应交的电费应该是多少。
 * 一个整数，表示用电总计（单位以千瓦时计），不超过10000
 * 输出一个数，保留到小数点后1位（单位以元计，保留到小数点后1位）。
 */
#include <iostream>
using namespace std;
int main()
{
    int x;
    double res = 0;
    cin >> x;
    int a = 0, b = 0, c = 0;
    if (x <= 150)
        a = x;
    else
        a = 150;
    if (150 < x && x <= 400)
        b = x - 150;
    else if (x > 400)
        b = 400 - 150;
    if (x > 400)
        c = x - 400;
    printf("%.1lf\n", a * 0.4463 + b * 0.4663 + c * 0.5663);
    return 0;
}
/**
 * 分配任务
 * 在社会实践活动中有三项任务分别是：种树、采茶、送水。依据小组人数及男生、女生人数决定小组的接受任务，人数小于10人的小组负责送水（输出water），人数大于等于10人且男生多于女生的小组负责种树（输出tree），人数大于等于10人且男生不多于女生的小组负责采茶（输出tea）。输入小组男生人数、女生人数，输出小组接受的任务。
 * 一行两个空格隔开的数，表示小组中男生和女生的人数。
 * 输出对应的任务。
 */
#include <iostream>
using namespace std;
int a, b;
int main()
{
    cin >> a >> b;
    if (a + b < 10)
        cout << "water";
    else
    {
        if (a > b)
            cout << "tree";
        else
            cout << "tea";
    }
    return 0;
}
/**
 * 数组填充
 * 输入一个整数 V，输出一个长度为 10 的数组 N，数组中的第一个元素为 V，每个后续元素的值都为上一个元素的值的 2 倍。例如，如果输入整数为 1，则数组为：1,2,4,8…
 * 输入一个整数V。（1≤V≤50）
 * 输出数组中的所有元素，每个元素占一行。输出格式为 N[i] =x，其中i 为元素编号（从 0 开始），x 为元素的值。
 */
#include <iostream>
using namespace std;
int main()
{
    int a[110], b;
    cin >> b;
    a[0] = b;
    for (int i = 1; i < 10; i++)
    {
        a[i] = a[i - 1] * 2;
    }
    for (int i = 0; i < 10; i++)
    {
        if (i != 10)
            cout << "N" << "[" << i << "]" << " " << "=" << a[i] << endl;
    }
    return 0;
}
/**
 * 身高查找
 * 找找谁的身高超过全家的平均身高。小明家有 n 口人，试着帮小明找出超过全家平均身高的成员。
 * 第一行有一个整数 n（1<n<11）。第二行是 n 个整数，用空格隔开。
 * 第一行为全家的平均身高（保留一位小数）；第二行有若干个数，为超过平均身高的人的顺序(从1开始)和身高厘米数。
 */
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    int a[13], b;
    cin >> b;
    for (int i = 1; i <= b; i++)
    {
        cin >> a[i];
    }
    double c = 0;
    for (int i = 1; i <= b; i++)
    {
        c += a[i];
    }
    cout << "AVG" << " " << "=" << " " << fixed << setprecision(1) << c / b << endl;
    for (int i = 1; i <= b; i++)
    {
        if (a[i] > c / b)
        {
            cout << i << ":" << a[i] << " ";
        }
    }
    return 0;
}