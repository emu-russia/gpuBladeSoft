unsigned int __thiscall sub_6F8BC780(void *this, _WORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int result; // eax@1
  int v5; // ecx@1
  unsigned int v6; // edx@1
  unsigned int v7; // edx@2
  _WORD *v8; // ecx@4
  int v9; // edx@9
  __int16 v10; // di@10

  result = -1;
  v5 = *(_DWORD *)this;
  v6 = *(_DWORD *)(v5 - 12);
  if ( a4 <= v6 )
  {
    v7 = v6 - a4;
    result = a3;
    if ( v7 <= a3 )
      result = v7;
    v8 = (_WORD *)(v5 + 2 * result);
    while ( a4 && v8 != a2 )
    {
      if ( (v8 != 0) == (a2 != 0) && *v8 == *a2 )
      {
        v9 = 0;
        while ( a4 - 1 != v9 )
        {
          v10 = v8[v9++ + 1];
          if ( v10 != a2[v9] )
            goto LABEL_13;
        }
        return result;
      }
LABEL_13:
      --v8;
      if ( !result )
        return -1;
      --result;
    }
  }
  return result;
}
