char *__cdecl sub_6F818B40(char *a1, char *a2, int a3)
{
  __int64 v3; // mm1@1
  int v4; // ebx@1
  __int64 v5; // mm2@1
  __int64 v6; // mm3@1
  char *v7; // edx@1
  char *result; // eax@1
  __int64 v9; // mm1@1
  __int64 v10; // mm2@1
  __int64 v11; // mm3@1

  v3 = *(_QWORD *)&a2[a3];
  v4 = 3 * a3;
  v5 = *(_QWORD *)&a2[2 * a3];
  v6 = *(_QWORD *)&a2[3 * a3];
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)&a1[a3] = v3;
  v7 = &a2[4 * a3];
  *(_QWORD *)&a1[2 * a3] = v5;
  *(_QWORD *)&a1[v4] = v6;
  result = &a1[4 * a3];
  v9 = *(_QWORD *)&v7[a3];
  v10 = *(_QWORD *)&v7[2 * a3];
  v11 = *(_QWORD *)&v7[3 * a3];
  *(_QWORD *)result = *(_QWORD *)v7;
  *(_QWORD *)&result[a3] = v9;
  *(_QWORD *)&result[2 * a3] = v10;
  *(_QWORD *)&result[v4] = v11;
  return result;
}
