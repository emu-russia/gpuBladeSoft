int __thiscall sub_6F936240(_DWORD *this, int a2, int a3)
{
  void *v3; // ecx@3
  int v4; // eax@7
  void *v5; // ecx@7
  int v6; // ecx@8
  void (__thiscall *v7)(int); // eax@11
  int v9; // eax@18
  _DWORD *v10; // ebp@19
  _DWORD *v11; // eax@21
  _DWORD *v12; // eax@23
  int v13; // [sp+0h] [bp-6Ch]@1
  void **v14; // [sp+14h] [bp-58h]@4
  _DWORD *v15; // [sp+18h] [bp-54h]@1
  char v16; // [sp+1Ch] [bp-50h]@1
  int v17; // [sp+20h] [bp-4Ch]@2
  int (__cdecl *v18)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-38h]@1
  int *v19; // [sp+38h] [bp-34h]@1
  char *v20; // [sp+3Ch] [bp-30h]@1
  int (__cdecl *v21)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, char); // [sp+40h] [bp-2Ch]@1
  int *v22; // [sp+44h] [bp-28h]@1
  volatile signed __int32 *v23; // [sp+5Ch] [bp-10h]@2
  char v24; // [sp+60h] [bp-Ch]@1

  v15 = this;
  v20 = &v24;
  v18 = sub_6F962A50;
  v19 = dword_6F96AAF4;
  v21 = sub_6F936495;
  v22 = &v13;
  sub_6F8A1A60((int *)&v16);
  if ( !byte_6FB48C38 && sub_6F9624B0((int)&byte_6FB48C38) )
  {
    v17 = 2;
    sub_6F8B33A0((int *)&dword_6FB4A510, 0);
    sub_6F962670((int)&byte_6FB48C38);
    sub_6F6813F0((int)sub_6F963130);
  }
  v23 = &dword_6FB4A510;
  v17 = -1;
  if ( sub_6F8B2F50(&dword_6FB4A510) )
  {
    v11 = (_DWORD *)sub_6F961D10(4);
    *v11 = off_6FBAF604;
    v17 = -1;
    sub_6F9628A0((int)v11, (int)&off_6FBABF34, (int)sub_6F8BAC10);
  }
  v3 = &unk_6FB49FD8;
  if ( !&unk_6FB49FD8 )
  {
LABEL_14:
    if ( !*(_DWORD *)(v15[3] + 4 * a3) )
    {
      _InterlockedAdd((volatile signed __int32 *)(a2 + 4), 1u);
      *(_DWORD *)(v15[3] + 4 * a3) = a2;
      goto LABEL_12;
    }
    goto LABEL_10;
  }
  v14 = &off_6FBAB860;
  while ( 1 )
  {
    v4 = sub_6F8C3BF0(v3);
    v5 = v14[1];
    if ( v4 == a3 )
    {
      v6 = sub_6F8C3BF0(v5);
      goto LABEL_9;
    }
    if ( sub_6F8C3BF0(v5) == a3 )
      break;
    v14 += 2;
    v3 = *v14;
    if ( !*v14 )
      goto LABEL_14;
  }
  v9 = sub_6F8C3BF0(*v14);
  v6 = a3;
  a3 = v9;
LABEL_9:
  if ( *(_DWORD *)(v15[3] + 4 * a3) )
  {
LABEL_10:
    if ( a2 )
    {
      v7 = *(void (__thiscall **)(int))(*(_DWORD *)a2 + 4);
      v17 = 1;
      v7(a2);
    }
    goto LABEL_12;
  }
  _InterlockedAdd((volatile signed __int32 *)(a2 + 4), 1u);
  v10 = v15;
  *(_DWORD *)(v15[3] + 4 * a3) = a2;
  if ( v6 != -1 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a2 + 4), 1u);
    *(_DWORD *)(v10[3] + 4 * v6) = a2;
  }
LABEL_12:
  v17 = 3;
  if ( sub_6F8B3270(v23) )
  {
    v12 = (_DWORD *)sub_6F961D10(4);
    *v12 = off_6FBAF62C;
    sub_6F9628A0((int)v12, (int)&off_6FBABF4C, (int)sub_6F8BAC90);
  }
  return sub_6F8A1AD0((int *)&v16);
}
