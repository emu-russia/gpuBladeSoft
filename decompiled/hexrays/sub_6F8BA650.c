int __thiscall sub_6F8BA650(void *this, int a2, int a3)
{
  void *v3; // ebp@1
  int v4; // ebx@1
  wint_t v5; // ax@4
  int result; // eax@6

  v3 = this;
  v4 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      v5 = getwc(*((FILE **)v3 + 8));
      if ( v5 == -1 )
        break;
      *(_WORD *)(a2 + 2 * v4++) = v5;
      if ( a3 == v4 )
        goto LABEL_7;
    }
    if ( !v4 )
      goto LABEL_6;
LABEL_7:
    *((_WORD *)v3 + 18) = *(_WORD *)(a2 + 2 * v4 - 2);
    result = v4;
  }
  else
  {
LABEL_6:
    *((_WORD *)v3 + 18) = -1;
    result = 0;
  }
  return result;
}
