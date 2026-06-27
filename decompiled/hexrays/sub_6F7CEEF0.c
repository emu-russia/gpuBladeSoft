int __usercall sub_6F7CEEF0@<eax>(int a1@<eax>, unsigned int a2@<edx>, char *a3@<ecx>, size_t a4)
{
  char *v4; // edi@1
  unsigned int v5; // ebp@1
  int v6; // ebx@1
  unsigned int v7; // ecx@1
  size_t v8; // esi@1
  size_t v9; // edx@6
  size_t v10; // ebp@8
  unsigned int v12; // ebp@13
  int v13; // edx@15
  unsigned int v14; // eax@15
  int v15; // edx@20
  bool v16; // cf@21
  _DWORD *v17; // edx@21
  int v18; // eax@21
  int v19; // eax@25
  int (__cdecl *v20)(_DWORD, _DWORD, _DWORD); // eax@25
  int v21; // eax@26
  _DWORD *v22; // ST1C_4@24
  _DWORD *v23; // ST1C_4@22
  int v24; // [sp+1Ch] [bp-20h]@4
  _DWORD *v25; // [sp+1Ch] [bp-20h]@25

  v4 = a3;
  v5 = a2;
  v6 = a1;
  v7 = *(_DWORD *)(a1 + 8264);
  v8 = a4;
  if ( v7 > a2 )
  {
    if ( sub_6F771FF0(*(_DWORD *)a1, *(_DWORD *)(a1 + 68)) )
      return 0;
    v15 = *(_DWORD *)(v6 + 40);
    if ( v15 )
    {
      v16 = *(_DWORD *)(v15 + 12) < 1u;
      *(_DWORD *)(v6 + 32) = 0;
      *(_DWORD *)(v6 + 20) = 0;
      *(_DWORD *)(v6 + 36) = 0;
      *(_DWORD *)v15 = ~-v16 & 7;
      v17 = *(_DWORD **)(v15 + 20);
      v18 = *v17;
      if ( (unsigned int)(*v17 - 4) <= 1 )
      {
        v23 = v17;
        (*(void (__cdecl **)(_DWORD, _DWORD))(v6 + 48))(*(_DWORD *)(v6 + 52), v17[3]);
        v17 = v23;
        v18 = *v23;
      }
      if ( v18 == 6 )
      {
        v22 = v17;
        (*(void (__cdecl **)(_DWORD, _DWORD))(v6 + 48))(*(_DWORD *)(v6 + 52), v17[1]);
        v17 = v22;
      }
      v19 = v17[10];
      *v17 = 0;
      v17[7] = 0;
      v17[8] = 0;
      v25 = v17;
      v17[13] = v19;
      v17[12] = v19;
      v20 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))v17[14];
      if ( v20 )
      {
        v21 = v20(0, 0, 0);
        v25[15] = v21;
        *(_DWORD *)(v6 + 60) = v21;
      }
    }
    *(_DWORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 28) = 0;
    *(_DWORD *)(v6 + 8264) = 0;
    v7 = 0;
    *(_DWORD *)(v6 + 12) = v6 + 72;
    *(_DWORD *)(v6 + 24) = v6 + 4168;
    *(_DWORD *)(v6 + 8272) = v6 + 8264;
    *(_DWORD *)(v6 + 8268) = v6 + 8264;
  }
  if ( v5 > v7 )
  {
    v12 = v5 - v7;
    while ( 1 )
    {
      v13 = *(_DWORD *)(v6 + 8268);
      v14 = *(_DWORD *)(v6 + 8272) - v13;
      if ( v14 > v12 )
        v14 = v12;
      v12 -= v14;
      *(_DWORD *)(v6 + 8268) = v14 + v13;
      *(_DWORD *)(v6 + 8264) = v14 + v7;
      if ( !v12 )
        break;
      if ( sub_6F7CE900(v6) )
        return 0;
      v7 = *(_DWORD *)(v6 + 8264);
    }
  }
  if ( a4 )
  {
    v24 = 0;
    while ( 1 )
    {
      v9 = *(_DWORD *)(v6 + 8272) - *(_DWORD *)(v6 + 8268);
      if ( v9 > v8 )
        v9 = v8;
      v10 = v9;
      memcpy(v4, *(const void **)(v6 + 8268), v9);
      v4 += v10;
      v24 += v10;
      *(_DWORD *)(v6 + 8268) += v10;
      *(_DWORD *)(v6 + 8264) += v10;
      v8 -= v10;
      if ( !v8 )
        break;
      if ( sub_6F7CE900(v6) )
        return v24;
    }
    return v24;
  }
  return 0;
}
