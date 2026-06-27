int __thiscall sub_6F8BBD70(_DWORD *this, int a2, _DWORD *a3, int a4, _DWORD *a5)
{
  _DWORD *v5; // ebp@1
  int i; // ebx@2
  signed int v7; // edx@3
  signed int v8; // eax@4
  int v9; // eax@7
  int result; // eax@10
  bool v11; // dl@13
  int v12; // [sp+1Ch] [bp-20h]@4

  v5 = this;
  if ( a3 != a5 || (v11 = sub_6F8FD070((int)this, a4), result = 6, !v11) )
  {
    for ( i = v5[3]; ; --i )
    {
      if ( !i )
        return 1;
      v7 = v5[2 * i + 3];
      if ( v7 & 2 )
      {
        v8 = v7 >> 8;
        v12 = v5[2 * i + 3] & 1;
        if ( v7 & 1 )
        {
          if ( a2 == -3 )
            continue;
          v8 = *(_DWORD *)(*a3 + v8);
        }
        v9 = (*(int (__stdcall **)(int, char *, int, _DWORD *))(*(_DWORD *)v5[2 * i + 2] + 32))(
               a2,
               (char *)a3 + v8,
               a4,
               a5);
        if ( v9 > 3 )
          return v12 | v9;
      }
    }
  }
  return result;
}
