char **__thiscall sub_6F93CC00(void *this, int a2)
{
  char **v2; // esi@1
  char *v3; // edx@1
  char *v4; // eax@1
  char *v5; // ebp@3
  char v7; // [sp+1Ch] [bp-50h]@1
  int v8; // [sp+20h] [bp-4Ch]@8
  int (__cdecl *v9)(int, int, __int64, void (**)(void), int *); // [sp+34h] [bp-38h]@1
  int *v10; // [sp+38h] [bp-34h]@1

  v2 = (char **)this;
  v9 = sub_6F962A50;
  v10 = &dword_6F96AB94;
  sub_6F8A1A60((int *)&v7);
  v3 = *(char **)a2;
  v4 = *v2;
  if ( a2 + 8 == *(_DWORD *)a2 )
  {
    v8 = 0;
    sub_6F93C180((int)v2, a2);
    v4 = *(char **)a2;
    goto LABEL_5;
  }
  if ( (char *)(v2 + 2) == v4 )
  {
    *v2 = v3;
    v2[1] = *(char **)(a2 + 4);
    v2[2] = *(char **)(a2 + 8);
    goto LABEL_7;
  }
  *v2 = v3;
  v5 = v2[2];
  v2[1] = *(char **)(a2 + 4);
  v2[2] = *(char **)(a2 + 8);
  if ( !v4 )
  {
LABEL_7:
    *(_DWORD *)a2 = a2 + 8;
    v4 = (char *)(a2 + 8);
    goto LABEL_5;
  }
  *(_DWORD *)a2 = v4;
  *(_DWORD *)(a2 + 8) = v5;
LABEL_5:
  *(_DWORD *)(a2 + 4) = 0;
  *v4 = 0;
  sub_6F8A1AD0((int *)&v7);
  return v2;
}
