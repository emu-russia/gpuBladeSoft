signed int __usercall sub_6F7C1C40@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4, unsigned int *a5)
{
  int v5; // ebp@1
  int v6; // ebx@1
  signed int v7; // edi@1
  unsigned int v8; // esi@2
  unsigned int v9; // ecx@4
  int v10; // eax@5
  int v11; // eax@7
  signed int v13; // eax@14
  int v14; // edi@16
  int v15; // esi@18
  char *v16; // eax@19
  int v17; // edi@19
  char *v18; // eax@25
  int v19; // edi@25
  signed int v20; // [sp+24h] [bp-38h]@2
  signed int v21; // [sp+28h] [bp-34h]@16
  int v22; // [sp+2Ch] [bp-30h]@18
  int v23; // [sp+3Ch] [bp-20h]@1

  v5 = a3;
  v6 = a1;
  v7 = *(_DWORD *)(a1 + 12);
  v23 = 0;
  if ( v7 > 11 )
  {
    v13 = *(_DWORD *)(a1 + 16);
    if ( v7 < v13 )
    {
      v8 = *(_DWORD *)(v6 + 20);
      v20 = 0;
    }
    else
    {
      if ( v13 > 44739241 )
      {
        v20 = 64;
        v9 = 0;
        goto LABEL_13;
      }
      v14 = v13 + (v13 >> 2) + 4;
      v21 = v13 + (v13 >> 2) + 4;
      if ( v13 > v14 || v14 > 44739242 )
        v21 = 44739242;
      v15 = *(_DWORD *)(v6 + 20);
      v22 = a2;
      if ( v15 == v6 + 892 )
      {
        v18 = sub_6F773B30(a4, 48, 0, v21, 0, &v23);
        v19 = v23;
        v9 = 0;
        *(_DWORD *)(v6 + 20) = v18;
        a2 = v22;
        v20 = v19;
        if ( v19 )
          goto LABEL_13;
        *(_DWORD *)v18 = *(_DWORD *)v15;
        *((_DWORD *)v18 + 143) = *(_DWORD *)(v15 + 572);
        qmemcpy(
          (void *)((unsigned int)(v18 + 4) & 0xFFFFFFFC),
          (const void *)(v15 - (_DWORD)&v18[-((unsigned int)(v18 + 4) & 0xFFFFFFFC)]),
          4 * ((unsigned int)&v18[-((unsigned int)(v18 + 4) & 0xFFFFFFFC) + 576] >> 2));
        v8 = *(_DWORD *)(v6 + 20);
        v20 = v23;
      }
      else
      {
        v16 = sub_6F773B30(a4, 48, v13, v21, (char *)v15, &v23);
        v17 = v23;
        v9 = 0;
        *(_DWORD *)(v6 + 20) = v16;
        v20 = v17;
        if ( v17 )
          goto LABEL_13;
        a2 = v22;
        v8 = (unsigned int)v16;
      }
      v7 = *(_DWORD *)(v6 + 12);
      *(_DWORD *)(v6 + 16) = v21;
    }
  }
  else
  {
    v8 = *(_DWORD *)(a1 + 20);
    v20 = 0;
    if ( !v8 )
    {
      v8 = a1 + 892;
      *(_DWORD *)(a1 + 16) = 12;
      *(_DWORD *)(a1 + 20) = a1 + 892;
    }
  }
  v9 = v8 + 48 * v7;
  if ( v9 > v8 )
  {
    v10 = *(_WORD *)(v9 - 48);
    if ( a2 <= v10 )
    {
      do
      {
        if ( a2 == v10 && *(_DWORD *)(v6 + 24) == v5 )
          break;
        v11 = *(_DWORD *)(v9 - 48);
        v9 -= 48;
        *(_DWORD *)(v9 + 48) = v11;
        *(_DWORD *)(v9 + 52) = *(_DWORD *)(v9 + 4);
        *(_DWORD *)(v9 + 56) = *(_DWORD *)(v9 + 8);
        *(_DWORD *)(v9 + 60) = *(_DWORD *)(v9 + 12);
        *(_DWORD *)(v9 + 64) = *(_DWORD *)(v9 + 16);
        *(_DWORD *)(v9 + 68) = *(_DWORD *)(v9 + 20);
        *(_DWORD *)(v9 + 72) = *(_DWORD *)(v9 + 24);
        *(_DWORD *)(v9 + 76) = *(_DWORD *)(v9 + 28);
        *(_DWORD *)(v9 + 80) = *(_DWORD *)(v9 + 32);
        *(_DWORD *)(v9 + 84) = *(_DWORD *)(v9 + 36);
        *(_DWORD *)(v9 + 88) = *(_DWORD *)(v9 + 40);
        *(_DWORD *)(v9 + 92) = *(_DWORD *)(v9 + 44);
        if ( v9 <= v8 )
          break;
        v10 = *(_WORD *)(v9 - 48);
      }
      while ( v10 >= a2 );
      v7 = *(_DWORD *)(v6 + 12);
    }
  }
  *(_DWORD *)(v6 + 12) = v7 + 1;
LABEL_13:
  *a5 = v9;
  return v20;
}
