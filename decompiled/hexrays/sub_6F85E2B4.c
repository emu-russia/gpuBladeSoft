int __usercall sub_6F85E2B4@<eax>(int result@<eax>)
{
  int v1; // edx@1
  int v2; // esi@2
  int v3; // edi@2
  int v4; // edx@3
  signed int v5; // ebx@8
  int v6; // ecx@11
  int v7; // edx@11
  int v8; // edx@9
  int v9; // ST18_4@9
  int v10; // [sp+1Ch] [bp-1Ch]@3

  v1 = *(_DWORD *)(result + 204);
  if ( !v1 )
  {
    v5 = *(_DWORD *)(result + 76);
    if ( v5 > 4 )
    {
      v8 = *(_DWORD *)result;
      *(_DWORD *)(v8 + 20) = 27;
      *(_DWORD *)(v8 + 24) = v5;
      *(_DWORD *)(*(_DWORD *)result + 28) = 4;
      v9 = result;
      (**(void (__cdecl ***)(_DWORD))result)(result);
      result = v9;
      v5 = *(_DWORD *)(v9 + 76);
    }
    *(_DWORD *)(result + 272) = v5;
    if ( v5 > 0 )
    {
      v6 = *(_DWORD *)(result + 84);
      v7 = 0;
      do
      {
        *(_DWORD *)(result + 4 * v7++ + 276) = v6;
        v6 += 88;
      }
      while ( v7 != v5 );
    }
    goto LABEL_6;
  }
  v2 = v1 + 36 * *(_DWORD *)(*(_DWORD *)(result + 372) + 28);
  v3 = *(_DWORD *)v2;
  *(_DWORD *)(result + 272) = *(_DWORD *)v2;
  if ( v3 > 0 )
  {
    v10 = *(_DWORD *)(result + 84);
    v4 = 0;
    do
    {
      *(_DWORD *)(result + 4 * v4 + 276) = v10 + 88 * *(_DWORD *)(v2 + 4 * v4 + 4);
      ++v4;
    }
    while ( v4 != v3 );
  }
  if ( !*(_BYTE *)(result + 248) )
  {
LABEL_6:
    *(_DWORD *)(result + 344) = 0;
    *(_DWORD *)(result + 348) = *(_DWORD *)(result + 360) * *(_DWORD *)(result + 360) - 1;
    *(_DWORD *)(result + 352) = 0;
    *(_DWORD *)(result + 356) = 0;
    return result;
  }
  *(_DWORD *)(result + 344) = *(_DWORD *)(v2 + 20);
  *(_DWORD *)(result + 348) = *(_DWORD *)(v2 + 24);
  *(_DWORD *)(result + 352) = *(_DWORD *)(v2 + 28);
  *(_DWORD *)(result + 356) = *(_DWORD *)(v2 + 32);
  return result;
}
