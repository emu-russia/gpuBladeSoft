int __usercall sub_6F768950@<eax>(int *a1@<eax>, int a2@<edx>, _DWORD *a3@<ecx>)
{
  int v3; // ebp@1
  _DWORD *v4; // edi@1
  int v5; // esi@1
  _DWORD *v6; // ebx@1
  int result; // eax@1
  int v8; // eax@2
  int v9; // edx@13
  int v10; // [sp+1Ch] [bp-20h]@1

  v3 = a2;
  v4 = a3;
  v5 = *a1;
  v6 = sub_6F773A50(*a1, 40, &v10);
  result = v10;
  if ( !v10 )
  {
    v8 = *(_DWORD *)v3;
    v6[7] = v5;
    if ( v8 & 1 )
    {
      sub_6F771FA0((int)v6, *(_DWORD *)(v3 + 4), *(_DWORD *)(v3 + 8));
      result = v10;
    }
    else if ( v8 & 4 )
    {
      result = sub_6F772C10((int)v6, *(const char **)(v3 + 12));
      v9 = *(_DWORD *)(v3 + 12);
      v10 = result;
      v6[4] = v9;
    }
    else
    {
      if ( !(v8 & 2) || !*(_DWORD *)(v3 + 16) )
      {
        v10 = 6;
LABEL_12:
        sub_6F773D90(v5, (int)v6);
        result = v10;
        *v4 = 0;
        return result;
      }
      sub_6F773D90(v5, (int)v6);
      v6 = *(_DWORD **)(v3 + 16);
      result = v10;
    }
    if ( !result )
    {
      v6[7] = v5;
      *v4 = v6;
      return result;
    }
    goto LABEL_12;
  }
  return result;
}
