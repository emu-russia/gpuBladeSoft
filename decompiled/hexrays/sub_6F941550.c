int __thiscall sub_6F941550(int this, int a2, int a3, unsigned int a4)
{
  int result; // eax@1
  int v5; // edi@1
  int v6; // esi@1
  int v7; // ebx@1
  int v8; // edx@1
  signed int v9; // ebp@2
  int v10; // ebp@3
  unsigned int v11; // [sp+0h] [bp-24h]@9

  result = a2;
  v5 = *(_DWORD *)(this + 36);
  v6 = *(_DWORD *)(this + 32) & 0x10;
  v7 = *(_DWORD *)(this + 32) & 8;
  v8 = a2 + *(_DWORD *)(this + 40);
  if ( v5 == this + 44 )
    v9 = 15;
  else
    v9 = *(_DWORD *)(this + 44);
  v10 = a2 + v9;
  if ( a2 != v5 )
  {
    v8 += a3;
    a3 = 0;
    v10 = v8;
  }
  if ( v7 )
  {
    *(_DWORD *)(this + 4) = a2;
    *(_DWORD *)(this + 12) = v8;
    *(_DWORD *)(this + 8) = a2 + a3;
  }
  if ( v6 )
  {
    *(_DWORD *)(this + 24) = v10;
    *(_DWORD *)(this + 20) = a2;
    *(_DWORD *)(this + 16) = a2;
    if ( (a4 > 0x7FFFFFFF) > 0 )
    {
      v11 = a4 - 0x7FFFFFFF;
      if ( (a4 - 0x7FFFFFFF + 2147483648) | (__CFADD__(a4, -2147483647) - 1) )
      {
        result = a2 + 0x7FFFFFFF;
      }
      else
      {
        v11 = 1;
        result = a2 - 2;
      }
      a4 = v11;
    }
    result += a4;
    *(_DWORD *)(this + 20) = result;
    if ( !v7 )
    {
      *(_DWORD *)(this + 4) = v8;
      *(_DWORD *)(this + 8) = v8;
      *(_DWORD *)(this + 12) = v8;
    }
  }
  return result;
}
