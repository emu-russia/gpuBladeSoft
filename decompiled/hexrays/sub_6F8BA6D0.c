int __thiscall sub_6F8BA6D0(void *this, int a2, int a3)
{
  void *v3; // ebp@2
  int v4; // ebx@2

  if ( a3 )
  {
    v3 = this;
    v4 = 0;
    do
    {
      if ( putwc(*(_WORD *)(a2 + 2 * v4), *((FILE **)v3 + 8)) == -1 )
        break;
      ++v4;
    }
    while ( a3 != v4 );
  }
  else
  {
    v4 = 0;
  }
  return v4;
}
