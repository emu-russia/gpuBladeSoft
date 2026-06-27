int __thiscall sub_6F9435B0(int this, int a2, int a3, unsigned int a4)
{
  int result; // eax@1
  int v5; // edi@1
  int v6; // ebx@1
  int v7; // ebp@1
  int v8; // esi@1
  int v9; // edx@2
  int v10; // edx@3
  unsigned int v11; // esi@9
  int v12; // [sp+0h] [bp-1Ch]@1

  result = a2;
  v5 = a3;
  v6 = *(_DWORD *)(this + 32) & 0x10;
  v7 = a2 + 2 * *(_DWORD *)(this + 40);
  v12 = *(_DWORD *)(this + 32) & 8;
  v8 = *(_DWORD *)(this + 36);
  if ( v8 == this + 44 )
    v9 = 14;
  else
    v9 = 2 * *(_DWORD *)(this + 44);
  v10 = a2 + v9;
  if ( a2 != v8 )
  {
    v7 += 2 * a3;
    v5 = 0;
    v10 = v7;
  }
  if ( v12 )
  {
    *(_DWORD *)(this + 4) = a2;
    *(_DWORD *)(this + 8) = a2 + 2 * v5;
    *(_DWORD *)(this + 12) = v7;
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
        result = a2 - 2;
      }
      else
      {
        result = a2 - 4;
        v11 = 1;
      }
      a4 = v11;
    }
    *(_DWORD *)(this + 20) = result + 2 * a4;
    result = v12;
    if ( !v12 )
    {
      *(_DWORD *)(this + 4) = v7;
      *(_DWORD *)(this + 8) = v7;
      *(_DWORD *)(this + 12) = v7;
    }
  }
  return result;
}
