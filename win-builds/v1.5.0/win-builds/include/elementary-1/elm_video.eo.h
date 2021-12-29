#ifndef _ELM_VIDEO_EO_H_
#define _ELM_VIDEO_EO_H_

#ifndef _ELM_VIDEO_EO_TYPES
#define _ELM_VIDEO_EO_TYPES


#endif
#define ELM_VIDEO_CLASS elm_video_class_get()

const Eo_Class *elm_video_class_get(void) EINA_CONST;

/**
 *
 * @brief Set the audio level of an Elm_Video object.
 *
 * @ingroup Video
 *
 * @param[in] volume The new audio volume.
 *
 */
EOAPI void  elm_obj_video_audio_level_set(double volume);

/**
 *
 * @brief Get the audio level of the current video.
 *
 * @return the current audio level.
 *
 * @ingroup Video
 *
 *
 */
EOAPI double  elm_obj_video_audio_level_get(void);

/**
 *
 * @brief Set whether the object can remember the last played position.
 *
 * @note This API only serves as indication. System support is required.
 *
 * @ingroup Video
 *
 * @param[in] remember the last played position of the Elm_Video object.
 *
 */
EOAPI void  elm_obj_video_remember_position_set(Eina_Bool remember);

/**
 *
 * @brief Set whether the object can remember the last played position.
 *
 * @return whether the object remembers the last played position (@c EINA_TRUE)
 * or not.
 *
 * @note This API only serves as indication. System support is required.
 *
 * @ingroup Video
 *
 *
 */
EOAPI Eina_Bool  elm_obj_video_remember_position_get(void);

/**
 *
 * @brief Set the current position (in seconds) to be played in the
 * Elm_Video object.
 *
 * @ingroup Video
 *
 * @param[in] position The time (in seconds) since the beginning of the media file.
 *
 */
EOAPI void  elm_obj_video_play_position_set(double position);

/**
 *
 * @brief Get the current position (in seconds) being played in the
 * Elm_Video object.
 *
 * @return The time (in seconds) since the beginning of the media file.
 *
 * @ingroup Video
 *
 *
 */
EOAPI double  elm_obj_video_play_position_get(void);

/**
 *
 * @brief Change the mute state of the Elm_Video object.
 *
 * @ingroup Video
 *
 * @param[in] mute The new mute state.
 *
 */
EOAPI void  elm_obj_video_audio_mute_set(Eina_Bool mute);

/**
 *
 * @brief Is the audio muted.
 *
 * @return @c EINA_TRUE if the audio is muted.
 *
 * @ingroup Video
 *
 *
 */
EOAPI Eina_Bool  elm_obj_video_audio_mute_get(void);

/**
 *
 * @brief Define the file or URI that will be the video source.
 *
 * @return @c EINA_TRUE on success, @c EINA_FALSE otherwise
 *
 * This function will explicitly define a file or URI as a source
 * for the video of the Elm_Video object.
 *
 * @see elm_video_add()
 * @see elm_player_add()
 *
 * @ingroup Video
 *
 * @param[in] filename The file or URI to target.
Local files can be specified using file:// or by using full file paths.
URI could be remote source of video, like http:// or local source like
WebCam (v4l2://). (You can use Emotion API to request and list
the available Webcam on your system).
 *
 */
EOAPI Eina_Bool  elm_obj_video_file_set(const char *filename);

/**
 *
 * @brief Is the video actually playing.
 *
 * @return @c EINA_TRUE if the video is actually playing.
 *
 * You should consider watching event on the object instead of polling
 * the object state.
 *
 * @ingroup Video
 *
 *
 */
EOAPI Eina_Bool  elm_obj_video_is_playing_get(void);

/**
 *
 * @brief Get the total playing time (in seconds) of the Elm_Video object.
 *
 * @return The total duration (in seconds) of the media file.
 *
 * @ingroup Video
 *
 *
 */
EOAPI double  elm_obj_video_play_length_get(void);

/**
 *
 * @brief Get the underlying Emotion object.
 *
 * @return the underlying Emotion object.
 *
 * @ingroup Video
 *
 *
 */
EOAPI Evas_Object * elm_obj_video_emotion_get(void);

/**
 *
 * @brief Is it possible to seek inside the video.
 *
 * @return @c EINA_TRUE if is possible to seek inside the video.
 *
 * @ingroup Video
 *
 *
 */
EOAPI Eina_Bool  elm_obj_video_is_seekable_get(void);

/**
 *
 * @brief Get the title (for instance DVD title) from this emotion object.
 *
 * @return A string containing the title.
 *
 * This function is only useful when playing a DVD.
 *
 * @note Don't change or free the string returned by this function.
 *
 * @ingroup Video
 *
 *
 */
EOAPI const char * elm_obj_video_title_get(void);

/**
 *
 * @brief Start to play the video
 *
 * Start to play the video and cancel all suspend state.
 *
 * @ingroup Video
 *
 *
 */
EOAPI void  elm_obj_video_play(void);

/**
 *
 * @brief Pause the video
 *
 * Pause the video and start a timer to trigger suspend mode.
 *
 * @ingroup Video
 *
 *
 */
EOAPI void  elm_obj_video_pause(void);

/**
 *
 * @brief Stop the video
 *
 * Stop the video and put the emotion in deep sleep mode.
 *
 * @ingroup Video
 *
 *
 */
EOAPI void  elm_obj_video_stop(void);

EOAPI extern const Eo_Event_Description _ELM_VIDEO_EVENT_FOCUSED;
EOAPI extern const Eo_Event_Description _ELM_VIDEO_EVENT_UNFOCUSED;

/**
 * No description
 */
#define ELM_VIDEO_EVENT_FOCUSED (&(_ELM_VIDEO_EVENT_FOCUSED))

/**
 * No description
 */
#define ELM_VIDEO_EVENT_UNFOCUSED (&(_ELM_VIDEO_EVENT_UNFOCUSED))

#endif
