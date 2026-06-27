char __usercall sub_6F968036@<al>(int a1@<eax>, int a2@<edx>, void (__cdecl *a3)(unsigned int)@<ecx>, int a4, int a5)
{
  int v5; // ebx@1
  unsigned int v6; // eax@1
  int v7; // esi@1
  int v8; // ebp@1
  int v9; // ecx@1
  int v10; // eax@1
  int v11; // edx@3
  int v12; // edi@3
  int v13; // eax@3
  int v14; // eax@5
  unsigned int v15; // edi@14
  int v16; // ecx@14
  int v18; // ebx@17
  int v19; // edx@18
  int v20; // ST28_4@19
  int v21; // eax@19
  int v22; // ebx@23
  int v23; // [sp+18h] [bp-34h]@1
  unsigned int v24; // [sp+1Ch] [bp-30h]@1
  int v25; // [sp+20h] [bp-2Ch]@5
  int v26; // [sp+24h] [bp-28h]@1
  signed int v27; // [sp+24h] [bp-28h]@18
  void (__cdecl *v28)(unsigned int); // [sp+2Ch] [bp-20h]@1

  v5 = a1;
  v6 = *(_DWORD *)(a1 + 52);
  v7 = *(_DWORD *)(v5 + 40);
  v8 = a4;
  v28 = a3;
  v24 = v6;
  v23 = 8 * a2;
  v26 = 8 * a2 + v6;
  v9 = *(_DWORD *)(v26 + 4);
  v10 = *(_DWORD *)(v6 + 4);
  if ( v10 >= a4 && v9 <= a5 )
  {
    v11 = *(_DWORD *)(v5 + 4);
    v12 = -*(_DWORD *)(v5 + 4);
    v13 = v12 & v10;
    if ( a5 <= v13 )
      v13 = a5;
    v25 = v13;
    v14 = a4;
    if ( v9 >= a4 )
    {
      v14 = v12 & (v9 + v11 - 1);
      v8 = v12 & (v9 + v11 - 1);
      if ( !((unsigned __int16)v9 & (unsigned __int16)(v11 - 1)) )
      {
        if ( *(_BYTE *)(v5 + 87) )
        {
          v7 -= 4;
          *(_BYTE *)(v5 + 87) = 0;
        }
        v8 = v11 + v14;
        v7 += 4;
        *(_DWORD *)(v7 - 4) = *(_DWORD *)v26;
      }
    }
    if ( *(_BYTE *)(v5 + 86) )
    {
      *(_DWORD *)(*(_DWORD *)(v5 + 88) + 20) = v14 >> *(_DWORD *)v5;
      *(_BYTE *)(v5 + 86) = 0;
    }
    if ( v8 <= v25 )
    {
      if ( *(_DWORD *)(v5 + 36) <= (unsigned int)(v7 + 4 * ((v25 - v8) >> *(_DWORD *)v5) + 4) )
      {
        *(_DWORD *)(v5 + 40) = v7;
        *(_DWORD *)(v5 + 44) = 98;
        return 1;
      }
      v15 = v24;
      v16 = v5;
      while ( v15 >= v24 && v8 <= v25 )
      {
        *(_BYTE *)(v16 + 87) = 0;
        v18 = *(_DWORD *)(v15 + 4);
        if ( v8 >= v18 )
        {
          if ( v8 == v18 )
          {
            *(_BYTE *)(v16 + 87) = 1;
            v8 += *(_DWORD *)(v16 + 4);
            v7 += 4;
            *(_DWORD *)(v7 - 4) = *(_DWORD *)v15;
          }
          v21 = v15 - v23;
        }
        else
        {
          v19 = *(_DWORD *)(v15 + v23 + 4);
          v27 = v18 - v19;
          if ( v18 - v19 < *(_DWORD *)(v16 + 16) )
          {
            v7 += 4;
            v22 = v8 - v19;
            v8 += *(_DWORD *)(v16 + 4);
            *(_DWORD *)(v7 - 4) = *(_DWORD *)(v15 + v23) + v22 * (*(_DWORD *)v15 - *(_DWORD *)(v15 + v23)) / v27;
            v21 = v15 - v23;
          }
          else
          {
            v20 = v16;
            v28(v15);
            v21 = v15 + v23;
            v16 = v20;
          }
        }
        v15 = v21;
      }
      v5 = v16;
    }
  }
  *(_DWORD *)(v5 + 40) = v7;
  *(_DWORD *)(v5 + 52) -= v23;
  return 0;
}
