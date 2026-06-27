signed int __usercall sub_6F8728A4@<eax>(int a1@<eax>, int a2@<edx>, signed int a3@<ecx>, int a4, signed int a5)
{
  signed int v5; // esi@1
  signed int v6; // ecx@2
  int v7; // ebx@2
  signed int result; // eax@6
  int *v9; // edx@8
  int v10; // eax@8
  char v11; // dl@11
  int v12; // [sp+1Ch] [bp-1Ch]@1

  v12 = a1;
  v5 = a5;
  if ( a5 > a3 )
  {
    v11 = sub_6F87276C(a1, a2, a3, a5);
    result = -1;
    if ( !v11 )
      return result;
    a2 = *(_DWORD *)(v12 + 8);
    a3 = *(_DWORD *)(v12 + 12);
  }
  v6 = a3 - a5;
  v7 = dword_6FB9EC80[a5] & (a2 >> v6);
  if ( v7 > *(_DWORD *)(a4 + 4 * a5) )
  {
    do
    {
      if ( v6 <= 0 )
      {
        if ( !sub_6F87276C(v12, a2, v6, 1) )
          return -1;
        a2 = *(_DWORD *)(v12 + 8);
        v6 = *(_DWORD *)(v12 + 12);
      }
      v7 = 2 * v7 | (a2 >> --v6) & 1;
      ++v5;
    }
    while ( *(_DWORD *)(a4 + 4 * v5) < v7 );
  }
  *(_DWORD *)(v12 + 8) = a2;
  *(_DWORD *)(v12 + 12) = v6;
  if ( v5 > 16 )
  {
    v9 = *(int **)(v12 + 16);
    v10 = *v9;
    *(_DWORD *)(v10 + 20) = 121;
    (*(void (__cdecl **)(int *, signed int))(v10 + 4))(v9, -1);
    result = 0;
  }
  else
  {
    result = *(_BYTE *)(*(_DWORD *)(a4 + 4 * v5 + 72) + *(_DWORD *)(a4 + 140) + v7 + 17);
  }
  return result;
}
