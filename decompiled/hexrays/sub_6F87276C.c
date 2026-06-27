char __usercall sub_6F87276C@<al>(int a1@<eax>, int a2@<edx>, signed int a3@<ecx>, signed int a4)
{
  int v4; // edi@1
  _BYTE *v5; // esi@1
  int v6; // ebx@1
  int v7; // edx@1
  _BYTE *v8; // ecx@3
  int v9; // esi@3
  int v10; // edx@3
  int v11; // ebx@4
  int v12; // eax@8
  int v13; // eax@13
  int v14; // ST14_4@13
  char v15; // ST10_1@13
  int v17; // eax@17
  int v18; // eax@18
  int v19; // [sp+18h] [bp-20h]@1
  signed int v20; // [sp+1Ch] [bp-1Ch]@3

  v19 = a1;
  v4 = a2;
  v5 = *(_BYTE **)a1;
  v6 = *(_DWORD *)(a1 + 4);
  v7 = *(_DWORD *)(a1 + 16);
  if ( *(_DWORD *)(v7 + 396) )
  {
LABEL_11:
    if ( a3 < a4 )
    {
      if ( !*(_BYTE *)(*(_DWORD *)(v7 + 424) + 36) )
      {
        v13 = *(_DWORD *)v7;
        *(_DWORD *)(v13 + 20) = 120;
        v14 = v7;
        v15 = a3;
        (*(void (__cdecl **)(int, signed int))(v13 + 4))(v7, -1);
        *(_BYTE *)(*(_DWORD *)(v14 + 424) + 36) = 1;
        LOBYTE(a3) = v15;
      }
      v4 <<= 25 - a3;
      a3 = 25;
    }
  }
  else if ( a3 <= 24 )
  {
    v20 = a3;
    v8 = *(_BYTE **)a1;
    v9 = *(_DWORD *)(a1 + 16);
    v10 = *(_DWORD *)(a1 + 4);
    do
    {
      if ( !v10 )
      {
        if ( !(unsigned __int8)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)(v9 + 24) + 12))(v8) )
          return 0;
        v12 = *(_DWORD *)(v9 + 24);
        v8 = *(_BYTE **)v12;
        v10 = *(_DWORD *)(v12 + 4);
      }
      --v10;
      v11 = *v8++;
      if ( v11 == 255 )
      {
        do
        {
          if ( !v10 )
          {
            if ( !(unsigned __int8)(*(int (__cdecl **)(int))(*(_DWORD *)(v9 + 24) + 12))(v9) )
              return 0;
            v17 = *(_DWORD *)(v9 + 24);
            v8 = *(_BYTE **)v17;
            v10 = *(_DWORD *)(v17 + 4);
          }
          --v10;
          v18 = *v8++;
        }
        while ( v18 == 255 );
        if ( v18 )
        {
          v6 = v10;
          v7 = v9;
          v5 = v8;
          a3 = v20;
          *(_DWORD *)(v7 + 396) = v18;
          goto LABEL_11;
        }
      }
      v4 = v11 | (v4 << 8);
      v20 += 8;
    }
    while ( v20 <= 24 );
    v5 = v8;
    v6 = v10;
    a3 = v20;
  }
  *(_DWORD *)v19 = v5;
  *(_DWORD *)(v19 + 4) = v6;
  *(_DWORD *)(v19 + 8) = v4;
  *(_DWORD *)(v19 + 12) = a3;
  return 1;
}
