volatile signed __int32 **__thiscall sub_6F955B50(int this, int a2)
{
  int v2; // edi@1
  int v3; // esi@1
  int v4; // eax@1
  int v5; // eax@1
  int v6; // eax@4
  int v7; // eax@5
  int v9; // edx@7
  int v10; // eax@9
  int v11; // ecx@9
  int v12; // ebp@9
  int v13; // edi@9

  v2 = this + 36;
  v3 = this;
  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20);
  v4 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(this + 24) = v4;
  v5 = *(_DWORD *)(this + 104);
  if ( v5 && v5 != v2 )
    j_j_free_1(*(void **)(this + 104));
  v6 = *(_DWORD *)(a2 + 104);
  if ( v6 == a2 + 36 )
  {
    *(_DWORD *)(v3 + 104) = v2;
    v9 = 0;
    *(_DWORD *)(v3 + 100) = 8;
    while ( 1 )
    {
      v10 = v2 + v9;
      v11 = v9 + *(_DWORD *)(a2 + 104);
      v9 += 8;
      v12 = *(_DWORD *)v11;
      v13 = *(_DWORD *)(v11 + 4);
      *(_DWORD *)v11 = 0;
      *(_DWORD *)(v11 + 4) = 0;
      *(_DWORD *)v10 = v12;
      *(_DWORD *)(v10 + 4) = v13;
      if ( v9 == 64 )
        break;
      v2 = *(_DWORD *)(v3 + 104);
    }
  }
  else
  {
    *(_DWORD *)(a2 + 104) = a2 + 36;
    *(_DWORD *)(v3 + 104) = v6;
    v7 = *(_DWORD *)(a2 + 100);
    *(_DWORD *)(a2 + 100) = 8;
    *(_DWORD *)(v3 + 100) = v7;
  }
  return sub_6F9383B0((volatile signed __int32 **)(v3 + 108), (volatile signed __int32 **)(a2 + 108));
}
