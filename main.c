#include &lt;stdio.h&gt;
#include &quot;askname.h&quot;
int main(int argc, char **argv)
{
char first[255], last[255];
askname(first, last);
printf(&quot;Hello, %s %s!\n&quot;, first, last);
return 0;
}