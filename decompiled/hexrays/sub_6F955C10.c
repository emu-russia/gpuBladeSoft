void __thiscall sub_6F955C10(int this, int a2)
{
  int v2; // esi@1
  int v3; // edx@1
  int v4; // edi@1
  int v5; // ebx@1
  int v6; // edx@1
  int v7; // ebx@1
  int v8; // edx@1
  int v9; // ebx@1
  int v10; // edx@1
  int v11; // ebx@1
  int v12; // edx@1
  int v13; // ebx@1
  int v14; // edx@1
  int v15; // ebx@1
  int v16; // edx@1
  int v17; // edx@3
  int v18; // ebp@4
  int v19; // ebx@4
  int v20; // edi@4
  volatile signed __int32 **v21; // esi@5
  int v22; // edx@9
  int v23; // edi@11
  int v24; // ebp@11
  int v25; // edx@12
  int v26; // ebx@13
  int v27; // [sp+18h] [bp-34h]@12
  char v28; // [sp+2Ch] [bp-20h]@5

  v2 = this + 36;
  v3 = *(_DWORD *)(this + 4);
  v4 = a2 + 36;
  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
  v5 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 4) = v3;
  v6 = *(_DWORD *)(this + 8);
  *(_DWORD *)(this + 8) = v5;
  v7 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 8) = v6;
  v8 = *(_DWORD *)(this + 12);
  *(_DWORD *)(this + 12) = v7;
  v9 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 12) = v8;
  v10 = *(_DWORD *)(this + 16);
  *(_DWORD *)(this + 16) = v9;
  v11 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a2 + 16) = v10;
  v12 = *(_DWORD *)(this + 20);
  *(_DWORD *)(this + 20) = v11;
  v13 = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 20) = v12;
  v14 = *(_DWORD *)(this + 24);
  *(_DWORD *)(this + 24) = v13;
  v15 = *(_DWORD *)(this + 104);
  *(_DWORD *)(a2 + 24) = v14;
  v16 = *(_DWORD *)(a2 + 104);
  if ( v15 != this + 36 || v16 != v4 )
  {
    if ( v15 == v2 || v16 == v4 )
    {
      if ( v15 == v2 )
      {
        v2 = a2 + 36;
        v15 = *(_DWORD *)(a2 + 104);
        v23 = a2;
        v24 = this;
      }
      else
      {
        v23 = this;
        v24 = a2;
      }
      v27 = v15;
      v25 = 0;
      do
      {
        v26 = *(_DWORD *)(v24 + 8 * v25 + 40);
        *(_DWORD *)(v23 + 8 * v25 + 36) = *(_DWORD *)(v24 + 8 * v25 + 36);
        *(_DWORD *)(v23 + 8 * v25++ + 40) = v26;
      }
      while ( v25 != 8 );
      *(_DWORD *)(v24 + 104) = v27;
      *(_DWORD *)(v23 + 104) = v2;
    }
    else
    {
      *(_DWORD *)(this + 104) = v16;
      *(_DWORD *)(a2 + 104) = v15;
    }
    v22 = *(_DWORD *)(this + 100);
    *(_DWORD *)(this + 100) = *(_DWORD *)(a2 + 100);
    *(_DWORD *)(a2 + 100) = v22;
  }
  else
  {
    v17 = 0;
    do
    {
      v18 = *(_DWORD *)(this + 8 * v17 + 36);
      v19 = *(_DWORD *)(this + 8 * v17 + 40);
      v20 = *(_DWORD *)(a2 + 8 * v17 + 40);
      *(_DWORD *)(this + 8 * v17 + 36) = *(_DWORD *)(a2 + 8 * v17 + 36);
      *(_DWORD *)(this + 8 * v17 + 40) = v20;
      *(_DWORD *)(a2 + 8 * v17 + 36) = v18;
      *(_DWORD *)(a2 + 8 * v17++ + 40) = v19;
    }
    while ( v17 != 8 );
  }
  v21 = (volatile signed __int32 **)(this + 108);
  sub_6F938240(&v28, (volatile signed __int32 **)(this + 108));
  sub_6F9383B0(v21, (volatile signed __int32 **)(a2 + 108));
  sub_6F9383B0((volatile signed __int32 **)(a2 + 108), (volatile signed __int32 **)&v28);
  sub_6F938380((volatile signed __int32 **)&v28);
}
