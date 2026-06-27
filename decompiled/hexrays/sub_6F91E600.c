char *__thiscall sub_6F91E600(char *this, int a2, int a3)
{
  char *v3; // ecx@1
  __int16 *v4; // eax@2
  unsigned __int16 v5; // ax@3
  int v6; // ebx@8
  __int16 *v7; // edx@8
  __int16 v8; // ax@9
  __int16 *v9; // eax@11
  unsigned __int16 *v10; // edx@15
  int v11; // edx@16
  int (__thiscall *v12)(int, int); // eax@16
  signed int v13; // eax@18
  int v14; // ecx@19
  int (*v16)(void); // eax@22
  int (*v17)(void); // eax@23
  int (*v18)(void); // eax@24
  int v19; // [sp+4h] [bp-88h]@1
  int v20; // [sp+1Ch] [bp-70h]@1
  int *v21; // [sp+20h] [bp-6Ch]@1
  __int16 v22; // [sp+26h] [bp-66h]@1
  int v23; // [sp+28h] [bp-64h]@2
  char *v24; // [sp+2Ch] [bp-60h]@1
  char v25; // [sp+30h] [bp-5Ch]@1
  int v26; // [sp+34h] [bp-58h]@1
  int (__cdecl *v27)(int, int, __int64, void (**)(void), int *); // [sp+48h] [bp-44h]@1
  int *v28; // [sp+4Ch] [bp-40h]@1
  char *v29; // [sp+50h] [bp-3Ch]@1
  int (*v30)(); // [sp+54h] [bp-38h]@1
  int *v31; // [sp+58h] [bp-34h]@1
  char v32; // [sp+73h] [bp-19h]@1
  char v33; // [sp+74h] [bp-18h]@1

  v24 = this;
  v31 = &v19;
  v20 = a3;
  v22 = a3;
  v29 = &v33;
  v21 = (int *)&v25;
  v27 = sub_6F962A50;
  v28 = dword_6F96C844;
  v30 = sub_6F91E7E6;
  sub_6F8A1A60((int *)&v25);
  v3 = v24;
  *((_DWORD *)v24 + 1) = 0;
  v24 = v3;
  v26 = -1;
  sub_6F920460(&v32, v3, 1);
  if ( v32 )
  {
    v23 = *(_DWORD *)&v24[*(_DWORD *)(*(_DWORD *)v24 - 12) + 120];
    v4 = *(__int16 **)(v23 + 8);
    if ( *(_DWORD *)(v23 + 12) <= (unsigned int)v4 )
    {
      v18 = *(int (**)(void))(*(_DWORD *)v23 + 36);
      v26 = 1;
      v5 = v18();
    }
    else
    {
      v5 = *v4;
    }
    if ( v5 != -1 )
    {
      if ( v5 == (_WORD)v20 )
        goto LABEL_17;
      while ( 1 )
      {
        v10 = *(unsigned __int16 **)(a2 + 20);
        if ( (unsigned int)v10 < *(_DWORD *)(a2 + 24) )
        {
          *v10 = v5;
          *(_DWORD *)(a2 + 20) = v10 + 1;
        }
        else
        {
          v11 = *(_DWORD *)a2;
          v19 = v5;
          v12 = *(int (__thiscall **)(int, int))(v11 + 52);
          v26 = 1;
          if ( (unsigned __int16)v12(a2, v19) == -1 )
            goto LABEL_17;
        }
        v6 = v23;
        ++*((_DWORD *)v24 + 1);
        v7 = *(__int16 **)(v6 + 8);
        if ( (unsigned int)v7 >= *(_DWORD *)(v6 + 12) )
        {
          v16 = *(int (**)(void))(*(_DWORD *)v23 + 40);
          v26 = 1;
          v8 = v16();
        }
        else
        {
          v8 = *v7;
          *(_DWORD *)(v6 + 8) = v7 + 1;
        }
        if ( v8 == -1 )
          break;
        v9 = *(__int16 **)(v23 + 8);
        if ( (unsigned int)v9 >= *(_DWORD *)(v23 + 12) )
        {
          v17 = *(int (**)(void))(*(_DWORD *)v23 + 36);
          v26 = 1;
          v5 = v17();
        }
        else
        {
          v5 = *v9;
        }
        if ( v5 == -1 )
          break;
        if ( v22 == v5 )
          goto LABEL_17;
      }
    }
    v13 = *((_DWORD *)v24 + 1) < 1u ? 6 : 2;
    goto LABEL_19;
  }
LABEL_17:
  if ( !*((_DWORD *)v24 + 1) )
  {
    v13 = 4;
LABEL_19:
    v14 = (int)&v24[*(_DWORD *)(*(_DWORD *)v24 - 12)];
    v19 = *(_DWORD *)(v14 + 20) | v13;
    v26 = -1;
    sub_6F958B40(v14, v19);
  }
  sub_6F8A1AD0(v21);
  return v24;
}
