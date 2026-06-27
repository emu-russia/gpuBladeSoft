unsigned int __thiscall sub_6F8C81E0(int this, _WORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int result; // eax@1
  unsigned int v5; // edx@1
  unsigned int v6; // edx@2
  _WORD *v7; // ecx@4
  int v8; // edx@9
  __int16 v9; // di@10

  result = -1;
  v5 = *(_DWORD *)(this + 4);
  if ( a4 <= v5 )
  {
    v6 = v5 - a4;
    result = a3;
    if ( v6 <= a3 )
      result = v6;
    v7 = (_WORD *)(*(_DWORD *)this + 2 * result);
    while ( a4 && v7 != a2 )
    {
      if ( (v7 != 0) == (a2 != 0) && *v7 == *a2 )
      {
        v8 = 0;
        while ( a4 - 1 != v8 )
        {
          v9 = v7[v8++ + 1];
          if ( v9 != a2[v8] )
            goto LABEL_13;
        }
        return result;
      }
LABEL_13:
      --v7;
      if ( !result )
        return -1;
      --result;
    }
  }
  return result;
}
