int __cdecl sub_6F77C850(int a1)
{
  int v1; // esi@1
  int result; // eax@1
  int v3; // edx@2
  __int16 v4; // cx@4
  int v5; // edi@5
  int v6; // ebx@5
  int v7; // edi@5
  int v8; // [sp+0h] [bp-18h]@2

  v1 = *(_DWORD *)(a1 + 28);
  result = *(_DWORD *)(v1 + 20);
  if ( !result )
    goto LABEL_9;
  v3 = *(_WORD *)result;
  v8 = 0;
  if ( (signed __int16)v3 > 1 )
    v8 = *(_WORD *)(*(_DWORD *)(result + 12) + 2 * (signed __int16)v3 - 4) + 1;
  v4 = *(_WORD *)(result + 2);
  if ( v4 > 1 )
  {
    v5 = *(_DWORD *)(result + 4);
    v6 = v5 + 8 * v8;
    v7 = v5 + 8 * v4 - 8;
    if ( *(_DWORD *)v6 == *(_DWORD *)v7
      && *(_DWORD *)(v6 + 4) == *(_DWORD *)(v7 + 4)
      && *(_BYTE *)(*(_DWORD *)(result + 8) + v4 - 1) == 1 )
    {
      *(_WORD *)(result + 2) = --v4;
    }
  }
  if ( (signed __int16)v3 <= 0 )
    goto LABEL_9;
  if ( v8 != v4 - 1 )
  {
    result = *(_DWORD *)(result + 12);
    *(_WORD *)(result + 2 * v3 - 2) = v4 - 1;
LABEL_9:
    *(_BYTE *)(v1 + 64) = 0;
    return result;
  }
  *(_WORD *)result = v3 - 1;
  *(_WORD *)(result + 2) = v4 - 1;
  *(_BYTE *)(v1 + 64) = 0;
  return result;
}
