signed int __cdecl sub_6F769170(int *a1, int a2, _DWORD *a3)
{
  signed int result; // eax@1
  int v4; // ebp@3
  _DWORD *v5; // edi@3
  int v6; // eax@4
  int v7; // edx@15
  int v8; // [sp+1Ch] [bp-20h]@3

  result = 33;
  *a3 = 0;
  if ( a1 )
  {
    result = 6;
    if ( a2 )
    {
      v4 = *a1;
      v5 = sub_6F773A50(*a1, 40, &v8);
      result = v8;
      if ( !v8 )
      {
        v6 = *(_DWORD *)a2;
        v5[7] = v4;
        if ( v6 & 1 )
        {
          sub_6F771FA0((int)v5, *(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8));
          result = v8;
        }
        else if ( v6 & 4 )
        {
          result = sub_6F772C10((int)v5, *(const char **)(a2 + 12));
          v7 = *(_DWORD *)(a2 + 12);
          v8 = result;
          v5[4] = v7;
        }
        else
        {
          if ( !(v6 & 2) || !*(_DWORD *)(a2 + 16) )
          {
            v8 = 6;
LABEL_14:
            sub_6F773D90(v4, (int)v5);
            result = v8;
            *a3 = 0;
            return result;
          }
          sub_6F773D90(v4, (int)v5);
          v5 = *(_DWORD **)(a2 + 16);
          result = v8;
        }
        if ( !result )
        {
          v5[7] = v4;
          *a3 = v5;
          return result;
        }
        goto LABEL_14;
      }
    }
  }
  return result;
}
