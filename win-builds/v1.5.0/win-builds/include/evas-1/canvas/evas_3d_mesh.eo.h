#ifndef _EVAS_3D_MESH_EO_H_
#define _EVAS_3D_MESH_EO_H_

#ifndef _EVAS_3D_MESH_EO_TYPES
#define _EVAS_3D_MESH_EO_TYPES


#endif
#define EVAS_3D_MESH_CLASS evas_3d_mesh_class_get()

const Eo_Class *evas_3d_mesh_class_get(void) EINA_CONST;

/**
 *
 * No description supplied.
 *
 * @param[in] mode The shade mode.
 *
 */
EOAPI void  evas_3d_mesh_shade_mode_set(Evas_3D_Shade_Mode mode);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI Evas_3D_Shade_Mode  evas_3d_mesh_shade_mode_get(void);

/**
 *
 * No description supplied.
 *
 * @param[in] frame The number of the key frame.
 * @param[in] material The material to be set to the key frame.
 *
 */
EOAPI void  evas_3d_mesh_frame_material_set(int frame, Evas_3D_Material *material);

/**
 *
 * No description supplied.
 *
 * @param[in] frame The number of the key frame.
 *
 */
EOAPI Evas_3D_Material * evas_3d_mesh_frame_material_get(int frame);

/**
 *
 * No description supplied.
 *
 * @param[in] assembly Vertex assembly.
 *
 */
EOAPI void  evas_3d_mesh_vertex_assembly_set(Evas_3D_Vertex_Assembly assembly);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI Evas_3D_Vertex_Assembly  evas_3d_mesh_vertex_assembly_get(void);

/**
 *
 * No description supplied.
 *
 * @param[in] type The type of the mesh file.
 * @param[in] file Path to the mesh file.
 * @param[in] key Key in the mesh file.
 *
 */
EOAPI void  evas_3d_mesh_file_set(Evas_3D_Mesh_File_Type type, const char *file, const char *key);

/**
 *
 * No description supplied.
 *
 * @param[in] type The type of the mesh file.
 * @param[in] file Path to the mesh file.
 * @param[in] key Key in the mesh file.
 *
 */
EOAPI void  evas_3d_mesh_save(Evas_3D_Mesh_File_Type type, const char *file, const char *key);

/**
 *
 * Set the vertex data of the key frame of the given mesh.
 *
 * This function make evas read from the given buffer whenever it requires.
 * If you want to release the buffer after calling this functions, use
 * evas_3d_mesh_frame_vertex_data_copy_set() instead.
 *
 * After setting the vertex data, further modifications should be protected
 * by map/unmap pair.
 *
 * @see evas_3d_mesh_frame_vertex_data_copy_set()
 * @see evas_3d_mesh_frame_vertex_data_map()
 * @see evas_3d_mesh_frame_vertex_data_unmap()
 *
 * @ingroup Evas_3D_Mesh
 *
 * @param[in] frame The number of the key frame.
 * @param[in] attrib Vertex attribute ID.
 * @param[in] stride Stride to go to the next vertex (in bytes).
 * @param[in] data Pointer to the vertex data buffer.
 *
 */
EOAPI void  evas_3d_mesh_frame_vertex_data_set(int frame, Evas_3D_Vertex_Attrib attrib, int stride, const void *data);

/**
 *
 * Set the vertex data of the key frame of the given mesh by copying from a buffer.
 * This function allocates internal vertex buffer and copy from the given
 * buffer. So you can release the buffer. If you want to modify the vertex data
 * use evas_3d_mesh_frame_vertex_data_map(). After finishing the modifications,
 * you should call evas_3d_mesh_frame_vertex_data_unmap().
 *
 * @see evas_3d_mesh_frame_vertex_data_set()
 * @see evas_3d_mesh_frame_vertex_data_map()
 * @see evas_3d_mesh_frame_vertex_data_unmap()
 *
 * @ingroup Evas_3D_Mesh
 *
 * @param[in] frame The number of the key frame.
 * @param[in] attrib Vertex attribute ID.
 * @param[in] stride Stride to go to the next vertex (in bytes).
 * @param[in] data Pointer to the vertex data buffer.
 *
 */
EOAPI void  evas_3d_mesh_frame_vertex_data_copy_set(int frame, Evas_3D_Vertex_Attrib attrib, int stride, const void *data);

/**
 *
 * Map the vertex buffer of the key frame of the given mesh.
 *
 * After manipulating the mapped buffer, evas_3d_mesh_frame_vertex_data_unmap()
 * should be called to properly download the data to the engine. If the data
 * was set using evas_3d_mesh_frame_vertex_data_set(), pointer to the original
 * buffer will be returned. Otherwise, the returned pointer can differ every
 * time calling this function.
 *
 * @see evas_3d_mesh_frame_vertex_data_unmap()
 * @return Starting address of the mapped vertex buffer.
 *
 * @ingroup Evas_3D_Mesh
 *
 * @param[in] frame The number of the key frame.
 * @param[in] attrib Vertex attribute ID.
 *
 */
EOAPI void * evas_3d_mesh_frame_vertex_data_map(int frame, Evas_3D_Vertex_Attrib attrib);

/**
 *
 * No description supplied.
 *
 * @param[in] frame The number of the key frame.
 * @param[in] attrib Vertex attribute ID.
 *
 */
EOAPI void  evas_3d_mesh_frame_vertex_data_unmap(int frame, Evas_3D_Vertex_Attrib attrib);

/**
 *
 * No description supplied.
 *
 * @param[in] frame The number of the key frame.
 * @param[in] attrib Vertex attribute ID.
 *
 */
EOAPI int  evas_3d_mesh_frame_vertex_stride_get(int frame, Evas_3D_Vertex_Attrib attrib);

/**
 *
 * No description supplied.
 *
 * @param[in] format Vertex index data format.
 * @param[in] count Vertex index count.
 * @param[in] indices Pointer to the index data.
 *
 */
EOAPI void  evas_3d_mesh_index_data_set(Evas_3D_Index_Format format, int count, const void *indices);

/**
 *
 * No description supplied.
 *
 * @param[in] format Vertex index data format.
 * @param[in] count Vertex index count.
 * @param[in] indices Pointer to the index data.
 *
 */
EOAPI void  evas_3d_mesh_index_data_copy_set(Evas_3D_Index_Format format, int count, const void *indices);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI Evas_3D_Index_Format  evas_3d_mesh_index_format_get(void);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI int  evas_3d_mesh_index_count_get(void);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI void * evas_3d_mesh_index_data_map(void);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI void  evas_3d_mesh_index_data_unmap(void);

/**
 *
 * No description supplied.
 *
 * @param[in] frame The number of the key frame to be added.
 *
 */
EOAPI void  evas_3d_mesh_frame_add(int frame);

/**
 *
 * No description supplied.
 *
 * @param[in] frame The number of the key frame to be added.
 *
 */
EOAPI void  evas_3d_mesh_frame_del(int frame);

/**
 *
 * Set the vertex count of the given mesh.
 *
 * Each key frame should have same vertex count to be properly interpolated.
 * Key frames have their own vertex data and the data should have more vertices
 * than the mesh's vertex count.
 *
 * Default vertex count is 0.
 *
 * @ingroup Evas_3D_Mesh
 *
 * @param[in] count Vertex count.
 *
 */
EOAPI void  evas_3d_mesh_vertex_count_set(unsigned int count);

/**
 *
 * Get the vertex count of the given mesh.
 *
 * @see evas_3d_mesh_vertex_count_set()
 *
 * @ingroup Evas_3D_Mesh
 *
 *
 */
EOAPI int  evas_3d_mesh_vertex_count_get(void);

/**
 *
 * No description supplied.
 *
 * @param[in] r The red component of the fog color.
 * @param[in] g The green component of the fog color.
 * @param[in] b The blue component of the fog color.
 * @param[in] a The transparency of fog.
 *
 */
EOAPI void  evas_3d_mesh_fog_color_set(Evas_Real r, Evas_Real g, Evas_Real b, Evas_Real a);

/**
 *
 * No description supplied.
 *
 * @param[out] r Pointer to receive red component of the fog color.
 * @param[out] g Pointer to receive green component of the fog color.
 * @param[out] b Pointer to receive blue component of the fog color.
 * @param[out] a Pointer to receive transparency of fog.
 *
 */
EOAPI void  evas_3d_mesh_fog_color_get(Evas_Real *r, Evas_Real *g, Evas_Real *b, Evas_Real *a);

/**
 *
 * No description supplied.
 *
 * @param[in] enabled The red component of the fog color.
 *
 */
EOAPI void  evas_3d_mesh_fog_enable_set(Eina_Bool enabled);

/**
 *
 * No description supplied.
 *
 *
 */
EOAPI Eina_Bool  evas_3d_mesh_fog_enable_get(void);


#endif
